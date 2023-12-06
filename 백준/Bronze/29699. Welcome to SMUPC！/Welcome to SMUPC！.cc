#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string word = "WelcomeToSMUPC";

    int N;

    cin >> N;

    N = (N - 1) % word.size();
    cout << word[N] << '\n';
    return 0;
}


