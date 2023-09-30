#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct s_Student {
    string name;
    int year;
    int month;
    int day;
} t_student;

int vcmp(t_student a, t_student b) {
    if (a.year == b.year) {
        if (a.month == b.month) {
            return a.day < b.day;
        } else {
            return a.month < b.month;
        }
    } else {
        return a.year < b.year;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;

    vector<t_student> v;
    t_student student;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> student.name >> student.day >> student.month >> student.year;
        v.push_back(student);
    }
    sort(v.begin(), v.end(), vcmp);
    cout << v[n - 1].name << '\n';
    cout << v[0].name << '\n';
    return 0;
}