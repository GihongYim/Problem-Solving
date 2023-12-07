#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    map<string ,string> m;

    m["NLCS"] = "North London Collegiate School";
    m["BHA"] = "Branksome Hall Asia";
    m["KIS"] = "Korea International School";
    m["SJA"] = "St. Johnsbury Academy";
    string alpha;

    cin >> alpha;
    cout << m[alpha] << '\n';
    return 0;
}