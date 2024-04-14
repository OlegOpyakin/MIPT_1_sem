void copy_array_reverse(int n, char *array_source, char *array_destination){
    for (int i = 0; i < n; i++){
        array_destination[n - 1 - i] = array_source[i];
    }
}