#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t timer = time(NULL);

    struct tm* t = localtime(&timer);

    cout << t->tm_year + 1900 << '-';

    cout << t->tm_mon + 1 << '-';

    cout << t->tm_mday;

    return 0;


}