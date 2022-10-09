#include <string>
#include <vector>

using namespace std;
int gcd (int a, int b);
vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int			num3;
    int			denum3;
    
    num3 = num1 * num2;
    denum1 *= num2;
    denum2 *= num1;
    denum3 = denum1 + denum2;
    answer.push_back(denum3 / gcd(denum3, num3));
    answer.push_back(num3 / gcd(denum3, num3));
    return answer;
}

int gcd (int a, int b)
{
    if (b == 0)
        return (a);
    return (gcd(b, a % b));
}