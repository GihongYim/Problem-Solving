#include <iostream>
#include <vector>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

bool isOverabundant(int n) {
    return sumOfDivisors(n) > n;
}

bool isDeficient(int n) {
    return sumOfDivisors(n) < n;
}

bool isPerfect(int n) {
    return sumOfDivisors(n) == n;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        if (!isOverabundant(n)) {
            cout << "BOJ 2022" << endl;
            continue;
        }
        
        bool valid = true;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i != n && !isDeficient(i) && !isPerfect(i)) {
                    valid = false;
                    break;
                }
                if (i != 1 && i != n / i && !isDeficient(n / i) && !isPerfect(n / i)) {
                    valid = false;
                    break;
                }
            }
        }
        
        if (valid) {
            cout << "Good Bye" << endl;
        } else {
            cout << "BOJ 2022" << endl;
        }
    }

    return 0;
}