#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int L;
    const long long r = 31;
    const long long M = 1234567891;
    string str;
    long long hash_value;

    cin >> L;
    cin >> str;
    hash_value = 0;
    for(int i = L - 1; i >= 0; i--)
    {    
        hash_value = (hash_value * r) % M;
        hash_value = (hash_value + (str[i] - 'a' + 1)) % M;
    }
    cout << hash_value <<'\n';
    return (0);   
}