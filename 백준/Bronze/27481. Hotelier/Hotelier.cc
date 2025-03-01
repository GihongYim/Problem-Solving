#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	string room = "0000000000";
	string cmd;
	int left;
	int right;
	
	cin >> n;
	cin >> cmd;
	
	for (int i = 0; i < cmd.length(); i++) {
		if (cmd[i] == 'L') {
			left = 0;
			while (room[left] == '1') {
				left++;
			}
			room[left] = '1';
		} else if (cmd[i] == 'R') {
			right = 9;
			while (room[right] == '1') {
				right--;
			}
			room[right] = '1';
		} else if (cmd[i] >= '0' && cmd[i] <= '9') {
			room[cmd[i] - '0'] = '0';
		}
	}
	cout << room << '\n';
	

	return 0;
}