#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int f[200005];
    
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= 1234567;
    }
    answer = f[n];
    return answer;
}