#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string grade;
    unordered_map<string,float> map;

    map["A+"] = 4.3;
    map["A0"] = 4.0;
    map["A-"] = 3.7;
    map["B+"] = 3.3;
    map["B0"] = 3.0;
    map["B-"] = 2.7;
    map["C+"] = 2.3;
    map["C0"] = 2.0;
    map["C-"] = 1.7;
    map["D+"] = 1.3;
    map["D0"] = 1.0;
    map["D-"] = 0.7;
    map["F"] = 0.0;
    
    cin >> grade;
    printf("%2.1f\n",map[grade]);

    return 0;
}