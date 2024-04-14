int* copyarr(int* a, unsigned int size){
    int* p = new int[size];
    for (unsigned int i = 0; i < size; i++){
        p[i] = a[i];
    }
    return p;
}