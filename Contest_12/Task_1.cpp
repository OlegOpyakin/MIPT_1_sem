struct subset_node {
    int key;
    subset_node *left;
    subset_node *right;
}; // можете добавлять дополнительные поля

bool init(subset_node **sn){
    *sn = nullptr;
    return 0;
} // инициализация пустого дерева (аналогично списку, пустое дерево это указатель на NULL)

bool insert(subset_node **sn, int k){
    subset_node *sfl = *sn;
    while (sfl->left && sfl->right){
        if (k == sfl->key) return false;
        if (k < sfl->key) *sn = sfl->left;
        if (k > sfl->key) *sn = sfl->right;
    }
    if (k < sfl->key){
        subset_node *new_elem = new subset_node();
        sfl->left = new_elem;
        new_elem->key = k;
        new_elem->left = nullptr;
        new_elem->right = nullptr;
    }
    if (k > sfl->key){
        subset_node *new_elem = new subset_node();
        sfl->right = new_elem;
        new_elem->key = k;
        new_elem->left = nullptr;
        new_elem->right = nullptr;
    }
    delete sfl;
    return 0;
} // добавление элемента в дерево, дубли игнорировать (ничего не добавлять в дерево, если там уже есть элемент с таким же key) и возвращать false

subset_node** find(subset_node **sn, int k){
    subset_node *sfl = *sn;
    while (sfl->key != k){
        if (k < sfl->key) *sn = sfl->left;
        if (k > sfl->key) *sn = sfl->right;
        if (sfl->left == nullptr && sfl->right == nullptr) return nullptr;
    }
    return &sfl;
} // поиск элемента в дереве, нужно вернуть указатель на элемент с тем же key или, если такого элемента не нашлось, то NULL

bool remove(subset_node **sn, int k){
    if (find(sn, k) == nullptr) return false;
    subset_node **sfl = find(sn, k);
    subset_node *sn1 = (*sfl)->left;
    subset_node *sn2 = (*sfl)->right;
    delete sfl;
    *sfl = sn2; // тут ничего не понял
    while ((*sfl)->left != nullptr)
        (*sfl) = (*sfl)->left;
    (*sfl)->left = sn1;
    return 0;
} // удаление элемента из дерева (если элемента не нашлось, то ничего не удалять и вернуть false)

unsigned int size(subset_node **sn){
    int a = 0;
    int result = counter(*sn, a);
    return result;
} // количество элементов в дереве

unsigned int counter(subset_node *sn, int a){
    if ((sn)->left != nullptr) counter(sn->left, a);
    if ((sn)->right != nullptr) counter(sn->right, a);


    a+=1;
    return a;
}
unsigned int height(subset_node *sn){
    subset_node *sfl = sn;
    if (sfl == nullptr) {
        return 0;
    }
    else if ((sfl)->left == nullptr && (sfl)->right == nullptr) {
        return 0;
    }
    else if (heigh((sfl)->left) > heigh((sfl)->right))
        return heigh(sfl->right) + 1;
    else
        return heigh(sfl->left) + 1;
} // высота дерева
void destructor(subset_node @sn); // очистить всю используемую память
int* DFS (subset_node @sn); //обход в глубину, возвращает указатель на массив из динами