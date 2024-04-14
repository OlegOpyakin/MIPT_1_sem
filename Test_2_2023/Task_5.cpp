
#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

struct Unit
{
    Point position;
    unsigned int id;
    char type[20];
};

struct Node
{
    Unit data;
    Node* next;
};

void insert(Node** f_list, Unit data)
{
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = *f_list;
    *f_list = new_node;
}

void clean(Node* f_list)
{
    if (!f_list)
        return;
    do
    {
        Node* tmp = f_list->next;
        delete f_list;
        f_list = tmp;
    } while (f_list);
}




void select(Node** idle, Node** selection, Point lt, Point rb){
    Node* tmp = *idle;
    Node* tmp2 = nullptr;
    while(tmp != nullptr){
        if (lt.x <= tmp->data.position.x and rb.x >= tmp->data.position.x and lt.y <= tmp->data.position.y and rb.y >= tmp->data.position.y ){
            if (tmp2 == nullptr) *idle = tmp->next;
            else tmp2->next = tmp->next;
            Node* tmp3 = tmp;
            tmp = tmp->next;
            tmp2->next = tmp3;
        }
        else {
            tmp2 = tmp;
            tmp = tmp->next;
        }
    }   
}




int main()
{
    int n;
    cin >> n;
    Node* idle = NULL;
    for (int i = 0; i < n; i++)
    {
        Unit tmp;
        cin >> tmp.position.x >> tmp.position.y >> tmp.id >> tmp.type;
        insert(&idle, tmp);
    }

    Point lt, rb;
    cin >> lt.x >> lt.y >> rb.x >> rb.y;

    Node* selection = NULL;

    select(&idle, &selection, lt, rb);

    cout << "Selected:" << endl;
    for (Node* it = selection; it != NULL; it = it->next)
        cout << it->data.type << " " << it->data.id << endl;
    cout << "Not Selected:" << endl;
    for (Node* it = idle; it != NULL; it = it->next)
        cout << it->data.type << " " << it->data.id << endl;

    clean(idle);
    clean(selection);
    return 0;
}