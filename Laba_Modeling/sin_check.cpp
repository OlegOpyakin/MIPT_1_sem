#include <iostream>
#include <fstream>
#include <cmath>

int sin_def(int number){
    int returnable = 63 + 63 * sin ( number * 0.0249 );
    return returnable;
}

int main() {
    std::ofstream out;
    out.open("sine_data.txt");
    if (out.is_open())
    {
        for (int i = -63; i <= 63; i++)
            out << sin_def(i) << std::endl;
    }
    out.close(); 


    return 0;
}