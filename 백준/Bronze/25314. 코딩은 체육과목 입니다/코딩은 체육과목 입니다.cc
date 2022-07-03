#include <iostream>
using namespace std;

int main(void)
{
    int N;
    int cnt;
    
    cin >> N;

    if (N % 4 == 0)
    {
        cnt = (N / 4);
    }
    else
    {
        cnt = (N / 4) + 1;
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << "long ";
    }
    cout << "int\n";
    return (0);
}