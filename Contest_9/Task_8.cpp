int* get_10_ints(){
    int *p;
    return p = new int[10];
}

void return_10_ints_to_the_wilds(int* p){
    delete[] p;
}