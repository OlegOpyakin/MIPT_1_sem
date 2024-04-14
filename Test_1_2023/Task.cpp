#include <iostream>
#include <vector>

int main() {
    int n, m, x = 0, y = 0, vectx = 1, vecty = 1;
    std::cin >> m >> n;
    std::vector<std::vector<char>> field(n, std::vector<char>(m, '.'));

    while (true) {
        field[x][y] = 'x';

        if (x == 0 and vectx < 0) {
            vectx = 1;
        } else if (x == n - 1 and vectx > 0) {
            vectx = -1;
        }

        if (y == 0 and vecty < 0) {
            vecty = 1;
        } else if (y == m - 1 and vecty > 0) {
            vecty = -1;
        }

        x += vectx;
        y += vecty;

        if (x == 0 and y == 0) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << field[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}