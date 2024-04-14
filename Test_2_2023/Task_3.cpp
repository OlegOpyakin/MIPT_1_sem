void init(Matrix *matrix){
    matrix->data = new int*[matrix->n];
    for (int i = 0; i < matrix->n; i++)
        matrix->data[i] = new int[matrix->m];
}
void clean(Matrix *matrix){
    for (int i = 0; i < matrix->n; i++)
        delete[] matrix->data[i];
    delete[] matrix->data;
}
void expand(Matrix* matrix, int n_minus, int n_plus, int m_minus, int m_plus)
{
    int nn = matrix->n + n_minus + n_plus;
    int mm = matrix->m + m_minus + m_plus;
    int **mas = new int*[nn];
    for (int i = 0; i < (nn); i++)
        mas[i] = new int[mm] {0};
    for (int i = n_minus; i < (matrix->n + n_minus); i++)
        for (int j = m_minus; j < (matrix->m + m_minus); j++)
            mas[i][j] = matrix->data[i-n_minus][j-m_minus];
    for (int i = 0; i < matrix->n; i++)
        delete[] matrix->data[i];
    delete[] matrix->data;
    matrix->data = mas;
    matrix->n = nn;
    matrix->m = mm;
}