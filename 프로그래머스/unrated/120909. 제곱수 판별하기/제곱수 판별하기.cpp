#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
            return 1;
    }
    return 2;
}