#include <iostream>


int main() {
    int time_start, time_end, N;
    std::cin >> time_start >> time_end;
    std::cin >> N;

    int id_record [100];
    int time [100];
    int id_person [100];

    for (int i = 0; i < N; i++){
        std::cin >> id_record[i] >> time[i] >> id_person[i];
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (time[j] > time[j + 1]) {
                int temp = time[j];
                time[j] = time[j + 1];
                time[j + 1] = temp;

                temp = id_record[j];
                id_record[j] = id_record[j + 1];
                id_record[j + 1] = temp;

                temp = id_person[j];
                id_person[j] = id_person[j + 1];
                id_person[j + 1] = temp;
            }
        }
    }
    
    /*for (int i = 0; i < N; i++){
        std::cout << id_record[i] << time[i] << id_person[i];
    }*/

    int mas[2];
    int counter[100] = {0};
    int delta_max = 0;
    for (int i = 0; i < N; i++){
        mas[1] = 0;
        int tmp = id_person[i];
        for (int j = 0; j < N; j++){
            if (id_person[j] == tmp){
                mas[2] = time[j];
                if (delta_max < mas[2] - mas[1]){
                    delta_max = mas[2] - mas[1];
                    mas[1] = time[j];
                }
            }
        }
        counter[i] = delta_max;
    }
    int count = 0;

    for (int i = 0; i < N; ++i)
    {
        int j;
        for (j = i + 1; j < N && counter[j] != counter[i]; ++j);
        count += j == N;      
    }
    
    std::cout << count << std::endl;
    return 0;
}