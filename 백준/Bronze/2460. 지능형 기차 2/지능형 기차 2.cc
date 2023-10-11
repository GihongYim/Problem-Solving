#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int totalNumOfPerson = 0;
    int addPerson;
    int deletePerson;
    int maxPerson = 0;
    for (int i = 0; i < 10; i++) {
        cin >> deletePerson >> addPerson;
        totalNumOfPerson -= deletePerson;
        totalNumOfPerson += addPerson;
        maxPerson = max(maxPerson, totalNumOfPerson);
    }
    cout << maxPerson << '\n';
    return 0;
}