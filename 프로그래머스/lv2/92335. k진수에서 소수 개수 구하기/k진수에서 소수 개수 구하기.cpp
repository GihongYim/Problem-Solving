#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int solution(int n, int k) {
    int answer = 0;
    long long number;
    string knumber;
    bool prime;
    while (n > 0) {
        knumber += ((n % k) + '0'); 
        n /= k;
    }
    reverse(knumber.begin(), knumber.end());
    for (int i = 0; i < knumber.length(); i++) {
        if (knumber[i] == '0')
            knumber[i] = ' ';
    }
    stringstream sin(knumber);
    
    while (sin >> number) {
        prime = true;
        if (number == 1) {
            prime = false;
        } else {
            for (long long i = 2; i * i <= number; i++) {
                if (number % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime) {
            answer++;
        }
    }
    return answer;
}