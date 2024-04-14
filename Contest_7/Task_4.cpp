#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int a[128][128]={0}, s[128][128]={0};
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
            std::cin >> a[i][j];
    }


    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
            if(i == 1)
                s[i][j] = s[i][j-1] + a[i][j];
            else if (j == 1)
                s[i][j] = s[i-1][j] + a[i][j];
            else 
                s[i][j] = std::min(s[i-1][j], s[i][j-1]) + a[i][j];
    }


    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
            std::cout << s[i][j] << ' ';
        std::cout << std::endl;
    }

    for(int i = 0; i<n+1; i++)
        s[i][0] = 10000;
    for(int j = 0; j<m+1; j++)
        s[0][j] = 10000;

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
            std::cout << s[i][j] << ' ';
        std::cout << std::endl;
    }


    int i = n;
    int j = m;
    int b[100];
    int f = 0;
    while (i!= 1 or j!=1)
    {
        if (s[i-1][j] < s[i][j-1])
        {
            b[f] = 1; //down
            i-=1;
        }
        else
        {
            b[f] = 0; //right
            j-=1;
        }
        f += 1;
    }
    for (f; f >= 0; f--)
    {
        if (b[f] = 1)
            std::cout << "down" << std::endl;
        if (b[f] = 1)
            std::cout << "right" << std::endl;
    }
    return 0;
} 