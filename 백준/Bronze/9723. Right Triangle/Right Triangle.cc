#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T;
    vector<int> edge(3);

    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        cin >> edge[0] >> edge[1] >> edge[2];
        sort(edge.begin(), edge.end());

        if (edge[0] * edge[0] + edge[1] * edge[1] == edge[2] * edge[2]) {
            cout << "Case #" << t << ": YES" << endl;
        } else {
            cout << "Case #" << t << ": NO" << endl;
        }
    }

    return 0;
}