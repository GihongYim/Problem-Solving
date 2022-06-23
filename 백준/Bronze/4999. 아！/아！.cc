#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a;
    cin >> b;
    if (a.size() < b.size())
        cout << "no\n";
    else
        cout << "go\n";
    
    return 0;
}