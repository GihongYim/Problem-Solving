#include <iostream>
using namespace std;
#define ll long long 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;

    cin >> n;
    if (n % 2 == 0) { 
        cout << "CY\n";
    } else {
        cout << "SK\n";
    }

    

    return 0;
}