#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    int a, b, c;

    cin >> N;
    cout << "Gnomes:\n";
    for (int test_case = 1; test_case <= N; test_case++) {
        cin >> a >> b >> c;

        if (a < b && b < c) {
            cout << "Ordered\n";
        } else if (a > b && b > c) {
            cout << "Ordered\n";
        }    
        else {
            cout << "Unordered\n";
        }
    }
    return 0;
}