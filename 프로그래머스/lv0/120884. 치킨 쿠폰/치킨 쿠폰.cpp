#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = chicken;
    while (1)
    {
        if (coupon < 10)
            break ;
        answer += coupon / 10;
        coupon = (coupon / 10) + (coupon % 10);
    }
    return answer;
}