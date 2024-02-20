#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float earth_weight;
    float moon_weight;

    while (1) {
        cin >> earth_weight;
        if (earth_weight < 0.0)
            break;
        moon_weight = 0.167 * earth_weight;
        cout << fixed << setprecision(2);
        cout << "Objects weighing " <<  earth_weight << " on Earth will weigh " << moon_weight <<  " on the moon.\n";
    }

    return 0;
}