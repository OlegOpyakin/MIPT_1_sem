#include <iostream>


int main() {
    int p, N, counter = 0, i = 0;
    float sum = 0;
    std::cin >> N;
    int * mas = new int[N];
    int * mas2 = new int[N];
    for (int i = 0; i < N; i++){
        std::cin >> mas[i];
    }
    for (int f = 0; f < N; f++){
        mas2[f] = mas[f];
    }
    for (int x = 0; x < N; x++){
        if (mas2[x] < 6) mas2[x] = -1;
    }
    while (i < N){
        if ( mas[i] > 5){
            p = 0;
            int m = i;
            if (i > N - 5) p = 1;
            while (m <= i+5 and m < N){
                if (mas[m] < 6) p = 1; 
                m+=1;
            }
            if ( p == 0 ){
                while( mas[i] > 5 and i < N){
                    sum += mas[i];
                    //std::cout << mas[i] << std::endl;
                    mas2[i] = -1;
                    if (i == N - 1) break;
                    if (mas[i+1] < 6) break;
                    i+=1;
                }
            }
        }
        i += 1;
    }
    for (i = 0; i < N; i++){
        if (mas2[i] == -1) counter += 1;
    }
    float answer;
    if (sum == 0) answer = 0;
    else answer = sum/counter;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);
    std::cout << answer << std::endl;
    delete[] mas;
    delete[] mas2;
    return 0;
}