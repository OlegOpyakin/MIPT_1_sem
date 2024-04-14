Coon* find_the_most_fed_cat(Coon* atc, unsigned int n_cats){
    int nom = 0;
    float max = 0;
    for (unsigned int i = 0; i < n_cats; i++){
        if (((atc[i].food) / (atc[i].weight)) > max){
            max = (atc[i].food) / (atc[i].weight);
            nom = i;
        }
    }
    Coon* p;
    return p = &(atc[nom]);
}