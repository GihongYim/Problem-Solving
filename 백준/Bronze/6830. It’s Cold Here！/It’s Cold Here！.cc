#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string country;
    string minCountry;
    int minTemp = 300;
    int temperature;

    while (1)
    {
        cin >> country >> temperature;
        if (temperature < minTemp)
        {
            minTemp = temperature;
            minCountry = country;
        }

        if (country == "Waterloo")
            break;
        
    }
    
    cout << minCountry << '\n';
    return 0;
}