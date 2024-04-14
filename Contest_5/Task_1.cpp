#include <iostream>

int main()
{
    int n, j, k, l;
    std::cin >> n;
    k = 0;
    j = 0;
    l = 0;
    if (n>=10){
        while(n >= 10)
        {
            n-=10;
            j+=1;
        }
    }
    if (n>=5){
        while(n >= 5)
        {
            n-=5;
            k+=1;
        }
    }
    if(n>=1){
        while(n >= 1)
        {
            n-=1;
            l+=1;
        }
    }
    std::cout << j << " " << k << " " << l << std::endl;
    return 0;
}
