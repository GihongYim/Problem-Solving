#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, L;
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int temp;
    
    cin >> N >> M >> L;
    
    v.push_back(0);
    v.push_back(L);
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int left = 1;
    int right = L;
    int mid;
    int dist;
    int cnt;
    int result = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;

        cnt = 0;
        for (int i = 1; i < v.size(); i++)
        {
            dist = v[i] - v[i - 1];
            cnt += (dist / mid);
            if(dist % mid == 0)
                cnt--;
        }
        if (cnt > M) 
            left = mid + 1;
        else 
        {
            right = mid - 1;
            result = mid;
        }
    }
    cout << result << '\n';

    return (0);
}