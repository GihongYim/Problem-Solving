#include <iostream>
#include <vector>
using namespace std;

int n;
int lower;
int upper;
int initPrime[4] = {2, 3, 5, 7};
vector<int> qPrime;


bool isPrime(int p) 
{
    if (p == 1)
        return false;
    if (p == 2)
        return true;
    if (p % 2 == 0)
        return false;
    for (int i = 3; i * i <= p; i++) {
        if (p % i == 0)
            return false;
    }
    return true;
}


void checkQPrime(int x, int p) {
    if (x == n) {
        qPrime.push_back(p);
        return;
    }
    for (int i = 0; i < 10; i++) {
        if (isPrime(p * 10 + i)) {
            checkQPrime(x + 1, p * 10 + i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    upper = 1;
    for (int i = 0; i < n; i++)
        upper *= 10;
    lower = upper / 10;
    checkQPrime(0, 0);
    for (int i = 0; i < qPrime.size(); i++) {
        cout << qPrime[i] << '\n';
    }
    return 0;
}