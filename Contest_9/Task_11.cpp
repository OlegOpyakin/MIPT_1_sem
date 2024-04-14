bool equal(Vector *a, Vector *b){
    for (int i = 0; i < 3; i++){
        if (a->coord[i] != b->coord[i])
            return false;
    }
    return true;
}