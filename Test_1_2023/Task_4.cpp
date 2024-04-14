#include <iostream>
int main()
{
    int n, m;
    char a[50][50];
    std::cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = '.';
        }
    }
    int vectx = 1, vecty = 1;
    int i = 0, j = 0;
    a[0][0] = '+';
    while ((i!=0 and j!=m-1) or (i!=n-1 and j!=m-1) or (i!=n-1 and j!=0)){
        a[i][j] = '+';
        //низ грань
        if(i == n-1 and vecty>0)
            vecty = -1;
        //верх грань
        if(i == 0 and vecty<0)
            vecty = 1;
        //прав грань
        if(j == m-1 and vectx>0)
            vectx = -1;
        //лев грань
        if(j == 0 and vecty<0)
            vectx = 1;
        i += vecty;
        j += vectx;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << a[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}