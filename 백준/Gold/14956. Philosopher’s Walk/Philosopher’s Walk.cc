#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

long long m;
void up(int x, int y, ll n);
void down(int x, int y, ll n);
void right(int x, int y, ll n);
void left(int x, int y, ll n);


void up(int x, int y, ll n) {
    // cout << "up:" << x << ' ' << y << '\n';
    if (n == 1) {
        cout << x << ' ' << y << '\n';
        return;
    }
    int offset = n / 2;
    ll area = n * n;
    if (m <= area / 4) {
        right(x, y, offset);
    } else if (m <= area / 2) {
        m -= (area / 4);
        up(x, y + offset, offset);
    } else if (m <= area * 3 / 4) {
        m -= (area / 2);
        up(x + offset, y + offset, offset);
    } else {
        m -= (area * 3 / 4);
        left(x + offset, y, offset);
    }
}


void down(int x, int y, ll n) {
    // cout << "down:" << x << ' ' << y << '\n';
    if (n == 1) {
        cout << x << ' ' << y << '\n';
        return;
    }
    int offset = n / 2;
    ll area = n * n;
    if (m <= area / 4) {
        left(x + offset, y + offset, offset);
    } else if (m <= area / 2) {
        m -= (area / 4);
        down(x + offset, y, offset);
    } else if (m <= area * 3 / 4) {
        m -= (area / 2);
        down(x, y, offset);
    } else {
        m -= (area * 3 / 4);
        right(x, y + offset, offset);
    }
}


void right(int x, int y, ll n) {
    // cout << "right:" << x << ' ' << y << '\n';
    if (n == 1) {
        cout << x << ' ' << y << '\n';
        return;
    }
    int offset = n / 2;
    ll area = n * n;
    if (m <= area / 4) {
        up(x, y, offset);
    } else if (m <= area / 2) {
        m -= (area / 4);
        right(x + offset, y, offset);
    } else if (m <= area * 3 / 4) {
        m -= (area / 2);
        right(x + offset, y + offset, offset);
    } else {
        m -= (area * 3 / 4);
        down(x, y + offset, offset);
    }
}



void left(int x, int y, ll n) {
    // cout << "left:" << x << ' ' << y << '\n';
    if (n == 1) {
        cout << x << ' ' << y << '\n';
        return;
    }
    int offset = n / 2;
    ll area = n * n;
    if (m <= area / 4) {
        down(x + offset, y + offset, offset);
    } else if (m <= area / 2) {
        m -= (area / 4);
        left(x, y + offset, offset);
    } else if (m <= area * 3 / 4) {
        m -= (area / 2);
        left(x, y, offset);
    } else {
        m -= (area * 3 / 4);
        up(x + offset, y, offset);
    }
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;

    cin >> n >> m;
    up(1, 1, n);
    return 0;
}