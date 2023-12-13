#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    int edge[3];
    
    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++){ 
        cin >> edge[0] >> edge[1] >> edge[2];
        sort(edge, edge + 3);
        if (edge[0] + edge[1] <= edge[2]) {
            cout << "Case #" << test_case << ": " << "invalid!\n";
        }
        else if (edge[0] == edge[1] && edge[1] == edge[2]) {
            cout << "Case #" << test_case << ": " << "equilateral\n";
        } else if (edge[0] == edge[1] || edge[1] == edge[2]) {
            cout << "Case #" << test_case << ": " << "isosceles\n";
        } else if (edge[0] != edge[1] && edge[1] != edge[2]) {
            cout << "Case #" << test_case << ": " << "scalene\n";
        }
    }


    return 0;
}