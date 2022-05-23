#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    string dish;
    int chicken;
    int other;

    cin >> N;
    cin >> dish;
    chicken = 0;
    other = 0;

    for(int i = 0; i < N; i++)
    {
        if (dish[i] == 'C')
            chicken++;
        else
            other++;
    }
    if (other == 0)
    {
        cout << chicken << '\n';
        return (0);
    }
    if (chicken % (other + 1) == 0)
        cout << chicken / (other + 1) << '\n';
    else
        cout << chicken / (other + 1) + 1 << '\n';
    
    return (0);
}