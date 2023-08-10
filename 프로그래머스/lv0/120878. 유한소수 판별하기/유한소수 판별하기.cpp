#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int solution(int a, int b) {
    int answer = 1;
    int mm  = gcd(a, b);
    b /= mm;
    while (b % 2 == 0) {
        b /= 2;
    }
    while (b % 5 == 0) {
        b /= 5;
    }
    if (b != 1)
        answer = 2;
    return answer;
}