#include <iostream>
using namespace std;

int main(void)
{
  long long A, B;
  long long temp;

  cin >> A >> B;
  if (A > B)
  {
    temp = A;
    A = B;
    B = temp;
  }
  if (B == A)
  {
    cout << 0 << '\n';
    return 0;
  }
  cout << B - A - 1 << '\n';
  for (int i = A + 1; i < B; i++)
    cout << i << ' ';
  return 0;
}