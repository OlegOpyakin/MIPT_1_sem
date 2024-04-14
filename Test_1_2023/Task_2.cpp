int base(int x, int n){
    int p = 0;
    for (int i = 1; i <= x; i++){
        int step = 1;
        for(int j = 0; j < n; j++)
        {
            step*=i;
        }
        if (step == x){
            p = i;
        }
    }
    return p;
}
