#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    int gandalf[6];
    int gandalf_score[6] = {1, 2, 3, 3, 4, 10};
    int sauron[7];
    int sauron_score[7] = {1, 2, 2, 2, 3, 5, 10};
    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++) {
        for (int i = 0; i < 6; i++)
            cin >>gandalf[i];
        for (int i = 0; i < 7; i++)
            cin >>sauron[i];
        int gan = 0;
        int sau = 0;
        for (int i = 0; i < 6; i++) {
            gan += (gandalf[i] * gandalf_score[i]);
        }
        for (int i = 0; i < 7; i++) {
            sau += (sauron[i] * sauron_score[i]);
        }
        if (gan > sau) {
            cout << "Battle " << test_case << ": Good triumphs over Evil\n";
        } else if (gan < sau) {
            cout << "Battle " << test_case << ": Evil eradicates all trace of Good\n";
        } else {
            cout << "Battle " << test_case << ": No victor on this battle field\n";
        }
    }

    return 0;
}
