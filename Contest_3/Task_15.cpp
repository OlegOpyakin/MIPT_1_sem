int determine_category(Crystal crystal) {
    int numm = -1;
    double length_now = crystal.length;
    double width_now = crystal.width;
    unsigned int facets_now = crystal.facets;
    unsigned long int color_now = crystal.color;
    unsigned int defects_now = crystal.defects;
    for (int i = 0; i < 10; i++) {
        if (numm > -1) break;
        Category category = categories[i];
        if (length_now >= category.length_min - 0.001 and length_now <= category.length_max + 0.001) {
            if (width_now >= category.width_min - 0.001 and width_now <= category.width_max + 0.001) {
                if (facets_now >= category.facets_min - 0.001 and facets_now <= category.facets_max + 0.001) {
                    if (color_now == category.colors[0] or color_now == category.colors[1] or
                        color_now == category.colors[2] or color_now == category.colors[3] or
                        color_now == category.colors[4]) {
                        if (defects_now >= category.defects_min - 0.001 and
                            defects_now <= category.defects_max + 0.001) {
                            numm = i;
                            break;
                        } else continue;
                    } else continue;
                } else continue;
            } else continue;
        } else continue;
    }
    return numm;
}