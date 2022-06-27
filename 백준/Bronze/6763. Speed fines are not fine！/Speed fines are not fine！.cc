#include <iostream>
using namespace std;

int main()
{
    int lim;
    int speed;
    cin >> lim;
    cin >> speed;

    if (speed - lim <= 0)
    {
        cout << "Congratulations, you are within the speed limit!\n";
    }
    else if(speed - lim <= 20)
    {
        cout << "You are speeding and your fine is $100.\n";
    }
    else if(speed - lim <= 30)
    {
        cout << "You are speeding and your fine is $270.\n";
    }
    else
    {
        cout << "You are speeding and your fine is $500.\n";
    }
}