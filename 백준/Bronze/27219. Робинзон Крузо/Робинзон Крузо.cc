#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    string answer;

    cin >> n;
    for (int i = 0; i < n / 5; i++) {
        answer += "V";
    }
    for (int i = 0; i < n % 5; i++) {
        answer += "I";
    }
    cout << answer << '\n';
    return 0;
}