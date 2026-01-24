#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> c(n);
    for(int &x:c) cin >> x;

    sort(c.begin(), c.end());

    double ans = 1.0;
    for(int i = 0; i < n; i++){
        if(c[i] > i+1){
            cout << "impossible\n";
            return 0;
        }
        ans = min(ans, (double)c[i]/(i+1));
    }

    cout << fixed << setprecision(6) << ans << "\n";
}