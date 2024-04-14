#include <iostream>
using std::cout;
using std::endl;
using std::cin;

unsigned long long int primorial(int n)
{
    long long int pr = 1;
    for (int i = 2; i <= n; i++)
    {
        bool f = true;
        for (int j = 2; j <= i/2; j++){
            if (i % j == 0)
            {
                f = false;
                break;
            }
        }
        if (f) pr = pr*i;
    }
    return pr;
}

int main()
{
        int n;
        cin >> n;
        cout << primorial(n) << endl;
        return 0;
}