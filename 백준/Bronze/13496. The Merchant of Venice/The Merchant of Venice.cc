#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int K;
    int n, s, d;
    int dist, load;
    int total;
    int margin;

    cin >> K;
    for (int tc = 1; tc <= K; tc++)
    {
        cin >> n >> s >> d;
        margin = s * d;
        total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> dist >> load;
            if (dist <= margin)
            {
                total += load;
            }            
        }
        cout << "Data Set " << tc << ":\n";
        cout << total << "\n\n";
    }    
    return (0);
}