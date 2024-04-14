#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct AlienLifeForm
{
        char name[50];
        unsigned int id;
        unsigned int weight;
        unsigned int length;
        unsigned int speed;
        unsigned int tentacles;
        unsigned int color[4];
        bool sentient;
        bool carnivore;
};

int compare (AlienLifeForm a, AlienLifeForm b){
    int p1 = 0, p2 = 0;
    if (a.sentient == true){
        unsigned int i = 0;
        for (i = 0; a.name[i] != '\0'; i++){}
        p1 += i * 126;
        p1 += a.length * 5;
        p1 += a.tentacles * 97;
        p1 += a.color[0] * 4;
        p1 += a.color[1] * 4;
        p1 += a.color[2] * 30;
        p1 += a.color[3] * 138;
        p1 -= a.weight * 2;
        p1 -= a.speed * 5;

        if (a.carnivore)
            p1 = p1 * 5;
        else
            p1 = p1 / 3;
    }
    else{
        unsigned int i = 0;
        for (i = 0; a.name[i] != '\0'; i++){}
        p1 += a.id * 23;
        p1 += a.weight * b.speed * 52;
        p1 += a.length * 27;
        p1 += a.tentacles * 5;
        p1 += a.color[0] * 75;
        p1 += a.color[1] * 2;
        p1 -= a.color[3] * 27;
    
        if (a.carnivore)
            p1 = p1 * 5;
        else
            p1 = p1 / 3;
    }


    if (b.sentient == true){
        unsigned int i = 0;
        for (i = 0; b.name[i] != '\0'; i++){}
        p2 += i * 126;
        p2 += b.length * 5;
        p2 += b.tentacles * 97;
        p2 += b.color[0] * 4;
        p2 += b.color[1] * 4;
        p2 += b.color[2] * 30;
        p2 += b.color[3] * 138;
        p2 -= b.weight * 2;
        p2 -= b.speed * 5;

        if (b.carnivore)
            p2 = p2 * 5;
        else
            p2 = p2 / 3;
    }
    else{
        unsigned int i = 0;
        for (i = 0; b.name[i] != '\0'; i++){}
        p2 += b.id * 23;
        p2 += b.weight * b.speed * 52;
        p2 += b.length * 27;
        p2 += b.tentacles * 5;
        p2 += b.color[0] * 75;
        p2 += b.color[1] * 2;
        p2 -= b.color[3] * 27;
    
        if (b.carnivore)
            p2 = p2 * 5;
        else
            p2 = p2 / 3;
    }


    if (p1 < p2)
        return -1;
    if (p1 == p2)
        return 0;
    else
        return 1;
}
int main()
{
        int n;
        cin >> n;
        AlienLifeForm zoo[100];
        for (int i = 0; i < n; i++)
                cin >> zoo[i].name >> zoo[i].id >> zoo[i].weight
                    >> zoo[i].length >> zoo[i].speed >> zoo[i].tentacles
                    >> zoo[i].color[0] >> zoo[i].color[1] >> zoo[i].color[2] >> zoo[i].color[3]
                    >> zoo[i].sentient >> zoo[i].carnivore;

        for (int i = 0; i < n; i++)
                for (int j = 0; j < n - i - 1; j++)
                        if (compare(zoo[j], zoo[j + 1]) > 0)
                        {
                                AlienLifeForm tmp = zoo[j];
                                zoo[j] = zoo[j + 1];
                                zoo[j + 1] = tmp;
                        }

        for (int i = 0; i < n; i++)
                cout << zoo[i].name << " ";
        cout << endl;
        return 0;
}