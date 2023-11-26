#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;

    ll h;
    vector<pair<ll, ll> > s;
    ll answer = 0;
    ll same_height = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h;

        same_height = 1;
        while (!s.empty() && s.back().first < h) {
            answer += s.back().second;
            s.pop_back();
        }

        if (!s.empty()) {
            if (s.back().first == h) {
                answer += s.back().second;
                same_height = (s.back().second + 1);
                if (s.size() > 1)
                    answer++;
                s.pop_back();
            } else {
                answer++;
            }
        }
        s.push_back(make_pair(h, same_height));
    }
    cout << answer << '\n';
    return 0;
}