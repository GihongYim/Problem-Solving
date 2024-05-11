#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
const int MAX = 60005;
int N;
int sushi[MAX];
int d, k, c;
int coupon = 0;
int maxEat = 0;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> d >> k >> c;

    for (int i = 0; i < N; i++) {
        cin >> sushi[i];
    }

    for (int i = 0; i < N; i++) {
        sushi[N + i] = sushi[i];
    }
    map<int, int> dish;
    for (int i = 0; i < k; i++) {
        if (sushi[i] == c)
            coupon++;
        if (dish.find(sushi[i]) == dish.end()) {
            dish.insert(make_pair(sushi[i], 0));
        }
        dish[sushi[i]]++;
    }
    maxEat = dish.size();
    if (dish.find(c) == dish.end()) {
        maxEat++;
    }

    for (int i = 1; i < N; i++) {
        int dropDish = sushi[i - 1];
        int newDish = sushi[i + k - 1];
        dish[dropDish]--;
        if (dropDish == c)
            coupon--;
        if (dish.find(newDish) == dish.end()) {
            dish.insert(make_pair(newDish, 0));
        }
        dish[newDish]++;
        if (newDish == c)
            coupon++;
        if (dish[dropDish] == 0) {
            dish.erase(dropDish);
        }
        int eat = dish.size();
        if (dish.find(c) == dish.end()) {
            eat++;
        }
        maxEat = max(maxEat, eat);
    }
    cout << maxEat << '\n';
    return 0;
}