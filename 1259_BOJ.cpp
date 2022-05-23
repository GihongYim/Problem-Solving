#include <iostream>
#include <string>
using namespace std;

int main()
{
    string  str;
    int     left;
    int     right;
    int     isvalid;
    while (1)
    {
        cin >> str;
        if (str == "0")
            break;
        left = 0;
        right = str.size() - 1;
        isvalid = 1;
        while (left < right)
        {
            if (str[left] != str[right])
            {
                isvalid = 0;
                break;
            } 
            left++;
            right--;
        }
        if (isvalid == 1)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}