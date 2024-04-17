#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
    string addr;
    size_t pos;

    cin >> N;
    vector<ll> ip(N);
    ll num;
    for (int i = 0; i < N; i++) {
        cin >> addr;
        pos = 0;
        for (int j = 0; j < 4; j++) {
            num = 0;
            while (addr[pos] != '\0' && addr[pos] != '.') {
                num *= 10;
                num += (addr[pos] - '0');
                pos++;
            }
            ip[i] *= 256;
            ip[i] += num;
            pos++; 
        }
    }
    ll ip_addr = 0;
    ll subnet = (1L << 32) - 1;
    ll a, b;
    bool diff = true;
    for (int i = 0; i < 32; i++) {
        a = subnet & ip[0];
        diff = false;
        for (int j = 1; j < ip.size(); j++) {
            b = subnet & ip[j];
            if (a != b) {
                diff = true;
                break;
            } 
        }
        if (!diff)
            break;
        subnet = (subnet << 1);
        subnet &= ((1L << 32) - 1);
    }
    subnet &= ((1L << 32) - 1);
    ip_addr = ip[0] & subnet;
    vector<ll> tmp;
    for (int i = 0; i < 4; i++) {
        tmp.push_back(ip_addr % 256);
        ip_addr /= 256;
    }
    for (int i = tmp.size() - 1; i >= 0; i--) {
        cout << tmp[i];
        if (i != 0) 
            cout << ".";
    }
    cout << '\n';
    tmp.clear();
    for (int i = 0; i < 4; i++) {
        tmp.push_back(subnet % 256);
        subnet /= 256;
    }
    for (int i = tmp.size() - 1; i >= 0; i--) {
        cout << tmp[i];
        if (i != 0) 
            cout << ".";
    }
    cout << '\n';
    return 0;
}