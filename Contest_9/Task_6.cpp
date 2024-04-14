void swap_arrays(int n, int *array_0, int *array_1){
    for (int i = 0; i < n; i++){
        int temp = array_0[i];
        array_0[i] = array_1[i];
        array_1[i] = temp;
    }
}