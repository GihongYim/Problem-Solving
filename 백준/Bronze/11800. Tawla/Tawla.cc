#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string iso[7] = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
    string nick[7] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
    int tt;
    int a, b;
    cin >> tt;
    for (int t = 1; t <= tt; t++) {
        cin >> a >> b;
        cout << "Case " << t << ": ";
        if (a == b) {
            cout << iso[a] << '\n';
        } else if (a + b == 11) {
            cout << "Sheesh Beesh\n";
        }
        else {
            if (a > b) {
                int tmp = b;
                b = a;
                a = tmp;
            }
            cout << nick[b] << ' ' << nick[a] << '\n';
        }
    }

    return 0;
}