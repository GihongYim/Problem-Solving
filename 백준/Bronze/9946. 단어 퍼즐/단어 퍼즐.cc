#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string prev;
    string post;
    int test_case = 1;
    while (1) {
        cin >> prev >> post;

        if (prev == "END" && post == "END")
            break;
        
        sort(prev.begin(), prev.end());
        sort(post.begin(), post.end());
        cout << "Case " << test_case << ": ";
        if (prev == post) {
            cout << "same\n";
        } else {
            cout << "different\n";
        }
        test_case++;
    }
    return 0;
}