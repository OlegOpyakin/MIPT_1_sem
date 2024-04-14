void swap_arrays(int **p_array_0, int **p_array_1){
    int *temp = *p_array_0;
    *p_array_0 = *p_array_1;
    *p_array_1 = temp;
}