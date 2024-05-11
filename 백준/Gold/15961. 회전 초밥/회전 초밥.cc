#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
using namespace std;
const int MAX = 3005;
int N;
int d, k, c;
int coupon = 0;
int maxEat = 0;
int sushi;
int s[MAX];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> d >> k >> c;

    unordered_map<int, int> dish;
    queue<int> q;
    for (int i = 0; i < k; i++) {
        cin >> sushi;
        s[i] = sushi;
        q.push(sushi);
        if (sushi == c)
            coupon++;
        if (dish.find(sushi) == dish.end()) {
            dish.insert(make_pair(sushi, 0));
        }
        dish[sushi]++;
    }
    maxEat = dish.size();
    if (dish.find(c) == dish.end()) {
        maxEat++;
    }

    for (int i = k; i < N; i++) {
        int dropDish = q.front();
        q.pop();
        int newDish;
        cin >> newDish;
        q.push(newDish);
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
        if (coupon == 0) {
            eat++;
        }
        maxEat = max(maxEat, eat);
    }
    for (int i = 0; i < k - 1; i++) {
        int dropDish = q.front();
        q.pop();
        int newDish = s[i];
        q.push(newDish);
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
        if (coupon == 0) {
            eat++;
        }
        maxEat = max(maxEat, eat);
    }
    cout << maxEat << '\n';
    return 0;
}