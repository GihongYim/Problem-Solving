#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, split, trim;
    int branch;

    while (1) {
        cin >> a;
        if (a == 0)
            break;
        branch = 1;
        for (int i = 0; i < a; i++) {
            cin >> split >> trim;
            branch *= split;
            branch -= trim;
        }
        cout << branch << '\n';
    }

    return 0;
}