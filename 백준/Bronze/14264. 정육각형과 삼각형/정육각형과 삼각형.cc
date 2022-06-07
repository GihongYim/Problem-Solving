#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double L;
    cin >> L;

    double area  =  L * L * sqrt(3) / 4;

    printf("%.10lf\n", area);

    return 0;
}