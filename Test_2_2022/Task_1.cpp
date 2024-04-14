#include <iostream>

int main() {
    int F, N, M, D, counter;
    std::cin >> F >> N >> M >> D;
    counter = 0;
    int mas_M [102];
    for (int i = 0; i < N; i++){
        std::cin >> mas_M[i];
    }

    int mas_D [102];
    for (int i = 0; i < N; i++){
        std::cin >> mas_D[i];
    }
    int i = 0;
    while (F > 0 and i < N){
        counter += 1;
        if (mas_M[i] > mas_D[i])
            F+=M;
        if (mas_M[i] < mas_D[i])
            F-=D;
        F -= mas_D[i];
        i += 1;
    }
    std::cout << counter;
    return 0;
}