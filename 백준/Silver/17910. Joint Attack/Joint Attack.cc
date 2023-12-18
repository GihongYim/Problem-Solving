#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n;
    long long tmp;
    vector<long long> arr;
    long long num, den;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        arr.push_back(tmp);
    }
    num = 1;
    den = arr[n - 1];
    long long m;
    long long result_num;
    long long result_den;
    for (long long i = n - 2; i >= 0; i--) {
        result_num = num + den * arr[i];
        result_den = den;
        num = result_den;
        den = result_num;
        m = gcd(num, den);
        num /= m;
        den /= m;    
    }
    // long long m = gcd(num, den);
    cout << den << "/" << num << '\n';
    return 0;
}