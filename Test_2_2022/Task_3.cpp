#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::abs;

const unsigned int N_MEASUREMENTS = 11;

struct Pilot {
    unsigned int id;
    double measurements[N_MEASUREMENTS];
    // weight height chest_circumference
    // neck_length neck_circumference
    // thight_length thight_circumference
    // shin_length shin_circumference
    // sleeve_length wrist_circumference
};

void getStats(Pilot* pilots, int n, double deviation_rate, unsigned int* n_average_total, unsigned int* n_average_by_measurements){
    
}

int main()
{
    unsigned int n;
    cin >> n;
    Pilot pilots[30];
    for (unsigned int i = 0; i < n; i++)
    {
        cin >> pilots[i].id;
        for (unsigned int j = 0; j < N_MEASUREMENTS; j++)
            cin >> pilots[i].measurements[j];
    }
    double deviation_rate;
    cin >> deviation_rate;

    unsigned int n_average_total, n_average_by_measurements[N_MEASUREMENTS];
    getStats(pilots, n, deviation_rate, &n_average_total, n_average_by_measurements);
    for (unsigned int i = 0; i < N_MEASUREMENTS; i++)
        cout << n_average_by_measurements[i] << ' ';
    cout << endl << n_average_total << endl;

    return 0;
}