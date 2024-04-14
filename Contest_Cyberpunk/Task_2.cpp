#include <iostream>
#include <cmath>

int main(){
    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);
    double k, h_0, m, a, V;
    std::cin >> k >> h_0 >> m;
    a = h_0 * k / m;
    V = sqrt( 2 * a * h_0);
    std::cout << V << std::endl;
    return 0;
}