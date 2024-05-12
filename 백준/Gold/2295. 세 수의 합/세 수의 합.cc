#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;

    cin >> N;
    vector<ll> arr(N);
    vector<ll> two;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            two.push_back(arr[i] + arr[j]);
        }
    }
    sort(arr.begin(), arr.end());
    sort(two.begin(), two.end());

    for (int i = N - 1; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            ll a = arr[i] - arr[j];
            if (binary_search(two.begin(), two.end(), a)) {
                cout << arr[i] << '\n';
                return 0;
            }
        }
    }

    return 0;
}