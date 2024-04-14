#include <iostream>

int main()
{
    long int x_SCV, x_drone, v_SCV, v_drone, x_minerals;
    std::cin >> x_SCV >> x_drone >> v_SCV >> v_drone >> x_minerals;
    while (true)
    {
        x_SCV += v_SCV;
        x_drone += v_drone;
        if (x_SCV >= x_minerals || x_drone >= x_minerals) break;
        if (x_SCV > x_drone && (x_SCV-x_drone) == 1) x_SCV -= v_SCV;
        else if (x_drone > x_SCV && (x_drone - x_SCV) == 1) x_drone -= v_drone;
    }
    if (x_SCV >= x_minerals && x_drone >= x_minerals) std::cout << "both";
    else if (x_SCV >= x_minerals) std::cout << "SCV";
    else std::cout << "drone";
    return 0;
}