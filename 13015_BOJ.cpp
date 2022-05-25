#include <iostream>
using namespace std;

void printchar(char ch, int n)
{
    for (int i = 0; i < n; i++)
        cout << ch;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;
    printchar('*', N); printchar(' ',(N - 2) * 2 + 1); printchar('*', N);
    printchar('\n', 1);
    for (int i = 1; i <= N - 2; i++)
    {
        printchar(' ', i);
        printchar('*', 1);
        printchar(' ', N - 2);
        printchar('*', 1);
        printchar(' ', (N - 2) * 2 + 1 - 2 * i);
        printchar('*', 1);
        printchar(' ', N - 2);
        printchar('*', 1);
        printchar('\n', 1);   
    }
    printchar(' ', N - 1); printchar('*', 1); printchar(' ', N - 2);
    printchar('*', 1);
    printchar(' ', N - 2); printchar('*', 1); 
    printchar('\n', 1);
    for (int i = N - 2; i >= 1; i--)
    {
        printchar(' ', i);
        printchar('*', 1);
        printchar(' ', N - 2);
        printchar('*', 1);
        printchar(' ', (N - 2) * 2 + 1 - 2 * i);
        printchar('*', 1);
        printchar(' ', N - 2);
        printchar('*', 1);
        printchar('\n', 1);  
    }
    printchar('*', N); printchar(' ',(N - 2) * 2 + 1); printchar('*', N);
    printchar('\n', 1);

    return 0;
}

// ** **
//  ***
// ** **
// ***   ***
//  * * * *
//   * * *
//  * * * *
// ***   ***
// 3

// ****   ****
//  *  * *  *
//   *  *  *
//  *  * *  *
// ****   ****
// 4
