#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return (1);
    return (factorial(n - 1) * n) % 10; 

}

int main()
{
    int n;

    cin >> n;
    cout << factorial(n) << '\n';
    return (0);
}