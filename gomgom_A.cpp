#include <iostream>
using namespace std;

int main()
{
    int N;
    int A, B;

    cin >> N;
    cin >> A >> B;

    if (N >= A / 2 + B)
    {
        cout << A / 2 + B << '\n';
    }
    else
    {
        cout << N << '\n';
    }
    return (0);
}