#include <iostream>
using std::cout;
using std::endl;
using std::cin;

char ouija[3][13]  = {
                {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'},
                {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},
                {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '!', '?'}
        };

void message(int i_start, int j_start, int length)
{
    int x = i_start, y = j_start, p1, p2;
    char message[50];
    bool f = true;
    message[0] = ouija[x][y];
    for (int i = 1; i < length; i++)
    {
        std::cin >> p1 >> p2;
        x += p1;
        y += p2;
        if (x >= 3 || y >= 13 || x < 0 || y < 0)
        {
            f = false;
            break;
        }
        else message[i] = ouija[x][y];
    }
    if (f)
        for (int i = 0; i < length; i++)
            std::cout << message[i];
    else
        std::cout << "THE SPIRITS ARE RESTLESS";
}
int main()
{
        int i_swap_0, j_swap_0, i_swap_1, j_swap_1;
        cin >> i_swap_0 >> j_swap_0 >> i_swap_1 >> j_swap_1;
        char tmp = ouija[i_swap_0][j_swap_0];
        ouija[i_swap_0][j_swap_0] = ouija[i_swap_1][j_swap_1];
        ouija[i_swap_1][j_swap_1] = tmp;

        int i_start, j_start, length;
        cin >> i_start >> j_start >> length;
        message(i_start, j_start, length);

        return 0;
}
