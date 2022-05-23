#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    int M;
    string str;
    int i;
    int cnt;
    int ret;

    cin >> N;
    cin >> M;
    cin >> str;

    cnt = 0;
    ret = 0;
    i = 0;
    while (i < M - 2)
    {
        if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I')
        {
            cnt++;
            i+= 2;
            if (cnt >= N)
                ret++;
        }
        else
        {
            i++;
            cnt = 0;
        }
    }
    cout << ret <<'\n';
}