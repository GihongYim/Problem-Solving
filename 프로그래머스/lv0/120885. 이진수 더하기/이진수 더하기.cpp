#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int dec3;
    int dec1 = 0, dec2 = 0;
    for (int i = 0; i < bin1.length(); i++) {
        dec1 *= 2;
        if (bin1[i] == '1')
            dec1 += 1;
    }
    for (int i = 0; i < bin2.length(); i++) {
        dec2 *= 2;
        if (bin2[i] == '1')
            dec2 += 1;
    }
    dec3 = dec1 + dec2;
    string temp;
    if (dec3 == 0)
        temp = "0";
    while (dec3 > 0)
    {
        if (dec3 % 2 == 1)
            temp += "1";
        else temp += "0";
        dec3/=2;
    }
    for (int i = temp.length() -1; i >= 0; i--)
        answer += temp[i];
    return answer;
}