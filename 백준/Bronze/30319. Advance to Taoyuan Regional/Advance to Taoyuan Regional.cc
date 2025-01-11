#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// 문자열을 날짜로 변환하는 함수
tm parseDate(const string &dateStr) {
    tm date = {};
    sscanf(dateStr.c_str(), "%d-%d-%d", &date.tm_year, &date.tm_mon, &date.tm_mday);
    date.tm_year -= 1900; // tm_year는 1900년 기준
    date.tm_mon -= 1;     // tm_mon은 0부터 시작
    return date;
}

int main() {
    string inputDate;
    cin >> inputDate;

    // 입력 날짜를 tm 구조체로 변환
    tm tentativeDate = parseDate(inputDate);

    // 기준 날짜 설정
    tm regionalDate = {};
    regionalDate.tm_year = 2023 - 1900;
    regionalDate.tm_mon = 10 - 1; // 10월
    regionalDate.tm_mday = 21;

    // 날짜를 time_t로 변환
    time_t tTentative = mktime(&tentativeDate);
    time_t tRegional = mktime(&regionalDate);

    // 날짜 차이를 계산 (초 단위 차이를 일 단위로 변환)
    double daysDifference = difftime(tRegional, tTentative) / (60 * 60 * 24);

    // 결과 출력
    if (daysDifference >= 35) {
        cout << "GOOD" << endl;
    } else {
        cout << "TOO LATE" << endl;
    }

    return 0;
}
