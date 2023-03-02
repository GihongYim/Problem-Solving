#include <iostream>
using namespace std;

int main(void)
{
    int man,woman;

     while (cin >> man >> woman)
    {
        if (man == 0 && woman == 0)
            break ;
        cout << man + woman << '\n';
    }
    return (0);
}