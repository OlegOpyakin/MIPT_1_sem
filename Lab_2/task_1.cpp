#include <fstream>
#include <chrono>
#include <random>

int rand_uns(int min, int max) 
{
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    static std::default_random_engine e(seed);
    std::uniform_int_distribution<int> d(min, max);
    return d(e);
}

int main()
{
    std::ofstream f("1.csv", std::ios::out);
    int a[1000] = { 0 };
    int N = 999;
    for (int i = 0; i<1000;i++)
    {
        a[i] = rand_uns(0,1000);
    }
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i<10; i+=2)
    {
        for (int i = 0; i < N - 1; i++) {
            for (int j=0; j < N - 1; j++) {
                if (a[j] > a[j+1]) {
                int tempCake = a[j];
                a[j] = a[j+1];
                a[j+1] = tempCake;
            }
        }
    }
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto nsec = end - start;
    f << nsec.count() << std::endl; // работаете как с привычным cout
    return 0;
}