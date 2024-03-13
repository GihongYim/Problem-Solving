#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    int arr[8] = {1, 2, 3, 4, 5, 4, 3, 2};

    cin >> n;
    
    cout << arr[(n - 1) % 8] << '\n';
    return 0;
}