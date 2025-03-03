#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long double ld;

int main() {
    vector<string> s;
    while (true) {
        ld a, r;
        string u, v;
        cin >> a >> u >> r;
        cin.ignore();
        getline(cin, v);
        
        if (a < 0) {
            break;
        }
        
        ld p = a * 100 / r;
        if (p < 1) {
            s.push_back(v);
        } else {
            cout.precision(1);
            cout << fixed << v << " " << a << " " << u << " ";
            cout.precision(0);
            cout << fixed << p << "%" << endl;
        }
    }
    
    cout << "Provides no significant amount of:" << endl;
    for (const string& x : s) {
        cout << x << endl;
    }
    
    return 0;
}