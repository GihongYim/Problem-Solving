#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t = time(0);
    tm * now = localtime(&t);
    cout << now->tm_year + 1900 << '\n';
    cout << now->tm_mon + 1 << '\n';
    cout << now->tm_mday << '\n';

    return 0;
}