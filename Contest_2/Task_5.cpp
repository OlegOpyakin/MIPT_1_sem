void binary(unsigned int n)
{
    if (n == 1){
        std::cout << "1";
        return;
    }
    if (n == 0){
        std::cout << "0";
        return;
    }
    binary(n / 2);
    std::cout << n % 2;
}
