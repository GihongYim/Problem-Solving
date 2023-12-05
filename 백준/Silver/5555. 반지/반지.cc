#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string target;
    string ring;
    int n;

    cin >> target;
    cin >> n;
    int answer = 0;
    for (int i = 0; i < n; i++) {
        cin >> ring;
        ring = ring + ring;
        if (ring.find(target) != string::npos)
            answer++;
    }
    cout << answer << '\n';
    return 0;
}