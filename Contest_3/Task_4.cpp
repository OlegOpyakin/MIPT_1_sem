#include <iostream>

int main()
{
 int n, x;
 std::cin >> n;
 int a[1000] = { 0 }, b[1000] = { 0 };
 for (int i = 0; i < n; i++)
 {
  std::cin >> x;
  a[i] = x;
  b[i] = x;
 }
 int k, p = 0;
 std::cin >> k;
 for (int i = 0; i < n - 1; i++)
  for (int j = 0; j < n - i; j++) if (a[j + 1] > a[j])
  {
   int t = a[j + 1];
   a[j + 1] = a[j];
   a[j] = t;
  }
 for (int i = 0; i < n; i++)
 {
  bool f = false;
  for (int j = 0; j < k; j++)
   if (a[j] == b[i] && p < k)
   {
    p++;
    f = true;
    a[j] = 0;
    break;

   }
  if (f) std::cout << b[i] << ' ';
 }
 return 0;
}