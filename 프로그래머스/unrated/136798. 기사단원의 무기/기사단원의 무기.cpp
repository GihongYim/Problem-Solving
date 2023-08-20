#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 1;
    int divisors= 0;
    for (int n = 2; n <= number; n++) {
        divisors= 2;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                if (i != n / i)
                    divisors += 2;
                else
                    divisors++;
            }
        }
        if (divisors > limit)
            answer += power;
        else
            answer += divisors;
    }
    return answer;
}