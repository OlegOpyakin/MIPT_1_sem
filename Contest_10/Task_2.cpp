int** transpose(int** matrix, unsigned int N, unsigned int M){
    int **new_matrix = new int*[M];
    for(unsigned int i = 0; i < M; i++) {
        new_matrix[i] = new int[N];
        for(unsigned int j = 0; j < N; j++) {
            new_matrix[i][j] = matrix[j][i];
        }
    }
    return new_matrix;
}