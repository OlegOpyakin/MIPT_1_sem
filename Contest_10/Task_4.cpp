void doubling(int** arr, unsigned int N){
    int *new_arr = new int[2*N];
    for (unsigned int i = 0; i < N; i++)
        new_arr[i] = (*arr)[i];
    delete [] *arr;    
    *arr = new_arr;
}