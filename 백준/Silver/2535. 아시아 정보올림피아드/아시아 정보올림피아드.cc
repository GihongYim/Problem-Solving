#include <bits/stdc++.h>
using namespace std;

typedef struct Student {
	int nation;
	int num;
	int score;
} student;

int vcmp(student a, student b) {
	if (a.score != b.score) {
		return a.score > b.score;
	} else {
		return a.num < b.num;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	vector<student> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		student new_student;
		cin >> new_student.nation >> new_student.num >> new_student.score;
		v.push_back(new_student);
	}
	sort(v.begin(), v.end(), vcmp);
	int count[1000] = {0, };
	int show = 0;
	for (int i = 0; i < v.size(); i++) {
		if (count[v[i].nation] < 2) {
			cout << v[i].nation << ' ' << v[i].num << '\n';
			count[v[i].nation]++;
			show++;
		}
		if (show >= 3)
			break;
	}
	return 0;
}