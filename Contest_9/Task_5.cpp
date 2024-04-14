int sum(int n, int *array){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += array[i];
    }
    return sum;
}