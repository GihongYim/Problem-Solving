#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n;
    int x1, x2, x3;

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> x1 >> x2 >> x3;   
    }
    if (m < 8) {
        cout << "unsatisfactory\n";
    } else {
        cout << "satisfactory\n";
    }
 
    return 0;
}