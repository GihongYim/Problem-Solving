#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string line;
    int start = 0;
    int end = 0;
    int diff = 0;

    cin >> line;
    start += (stoi(line.substr(0, 2)) * 3600);
    start += (stoi(line.substr(3, 2)) * 60);
    start += stoi(line.substr(6, 2));

    cin >> line;
    end += (stoi(line.substr(0, 2)) * 3600);
    end += (stoi(line.substr(3, 2)) * 60);
    end += stoi(line.substr(6, 2));
    if (start >= end) {
        end += (24 * 60 * 60);
    }
    diff = end - start;
    int hh = diff / 3600;
    diff %= 3600;
    int mm = diff / 60;
    diff %= 60;
    int ss = diff;
    cout.width(2);
    cout.fill('0');
    cout << hh << ":";
    cout.width(2);
    cout.fill('0');
    cout << mm << ":";
    cout.width(2);
    cout.fill('0');
    cout << ss << '\n'; 
    return 0;
}