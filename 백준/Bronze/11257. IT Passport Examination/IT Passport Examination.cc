#include <iostream>
using namespace std;

int main(void)
{
    int N;
    int id;
    int score;
    int total;
    int low_bound[] = {11,9,12};
    bool pass;

    cin >> N;

    for (int p = 1; p <= N; p++)
    {
        cin >> id;
        total = 0;
        pass = true;
        for (int i = 0; i < 3; i++)
        {
            cin >> score;
            if (score < low_bound[i])
                pass = false;
            total += score;
        }
        if (total < 55)
        {
            pass = false;
        }
        cout << id << ' ' << total << ' ';
        if (pass)
        {
            cout << "PASS\n";
        }
        else
        {
            cout << "FAIL\n";
        }
    }
}