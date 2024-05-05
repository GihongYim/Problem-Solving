#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

double edge[100005];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n;
    double total = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> edge[i];
        total += pow(edge[i], 3);
    }
    cout << fixed;
    cout << pow(total, 1 / 3.0);

    return 0;
}