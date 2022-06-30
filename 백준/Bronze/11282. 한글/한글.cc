#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    int N;
    cin >> N;
    N+=3071; // 1-Based를 0-Based로 변환
	s.push_back(N/4096+234);
	s.push_back(N/64%64+128);
	s.push_back(N%64+128);
    cout << s;
    return (0);
}