#include <iostream>
#include <vector>

struct Vector {
    int time, event, code;
    char des[50];
};

int main() {
    int n, a[20] = {0};
    std::cin >> n;
    Vector R[20];
    for (int i=0; i<n; i++)
    {
        std::cin >> R[i].time >> R[i].event >> R[i].code >> R[i].des;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j <50; j++)
            if(int(R[i].des[j]) == int(' ') or (int(R[i].des[j]) > 64 and int(R[i].des[j]) < 91) or (int(R[i].des[j]) > 96 and int(R[i].des[j])<123))
            a[i] = 1;
    return 0;
}