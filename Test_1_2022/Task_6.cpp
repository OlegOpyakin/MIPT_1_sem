#include <iostream>

int main()
{
    char matrix[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = ' ';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char n;
            n = std::cin.get();
            if (n != '\n') matrix[i][j] = n;
            if (n == '\n') break;
        }
    }
    /*Проверка столбцов*/
    for (int j = 0; j < 3; j++)
    {
        int k = 0, x = 0, y = 0;
        for (int i = 0; i < 3; i++)
        {
            if (matrix[i][j] == 'x') k++;
            if (matrix[i][j] == ' ')
            {
                x = j;
                y = i;
            }
        }
        if (k == 2) matrix[y][x] = 'x';
    }
    /*Проверка линий*/
    for (int i = 0; i < 3; i++)
    {
        int k = 0, x = 0, y = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 'x') k++;
            if (matrix[i][j] == ' ')
            {
                x = j;
                y = i;
            }
        }
        if (k == 2) matrix[y][x] = 'x';
    }
    int k = 0, x = 0, y = 0;
    /*Проверка левой диагонали*/
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][i] == 'x') k++;
        if (matrix[i][i] == ' ')
        {
            x = i;
            y = i;
        }
    }
    if (k == 2) matrix[y][x] = 'x';
    /*Проверка правой диагонали*/
    k = 0, x = 0, y = 0;
    for (int i = 2; i > -1; i--)
    {
        if (matrix[i][2 - i] == 'x') k++;
        if (matrix[i][2 - i] == ' ')
        {
            x = 2 - i;
            y = i;
        }
    }
    if (k == 2) matrix[y][x] = 'x';
    /*Вывод матрицы*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}