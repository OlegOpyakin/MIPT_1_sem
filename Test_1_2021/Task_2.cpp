#include <iostream>

int main()
{
 int Vv, Vm, L, K, N;
 std::cin >> Vv >> Vm >> L >> K >> N;
 while (1)
 {
  N -= 1;
  L -= Vm;
  if (Vv - N > 0)
  {
   K -= (Vv - N);
   L += (Vv - N);
  }
  if (K <= 0 && N != 0)
  {
   std::cout << N;
   break;
  }
  if (L <= 0)
  {
   std::cout << 0;
   break;
  }
  if (K <= 0 && N != 0)
  {
   std::cout << 0;
   break;
  }
 }
 return 0;
}