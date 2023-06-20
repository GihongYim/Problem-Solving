#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> nums(3);

	for (int i = 0; i < 3; i++){
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end());
	while (nums[2] >= nums[0] + nums[1])
		nums[2]--;
	cout << nums[0] + nums[1] + nums[2] << '\n';
	return 0;
}