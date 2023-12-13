#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int K;
    int h;
    string cmd;

    cin >> K;
    for (int t = 1; t <= K; t++) {
        cin >> h;
        cin >> cmd;
        for (int i = 0; i < cmd.length(); i++) {
            if (h == 0) {
                break;
            }
            if (cmd[i] == 'c') {
                h++;
            } else if (cmd[i] == 'b'){
                h--;
            }
            
        }
        cout << "Data Set " << t << ":\n";
        cout << h << "\n\n";
    }
    return 0;
}