#include <string>
#include <vector>

using namespace std;

bool orOp(bool a, bool b)
{
    if (a || b)
        return true;
    else
        return false;
}

bool andOp(bool a, bool b)
{
    if (a && b)
        return true;
    else
        return false;
}

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    answer = andOp(orOp(x1, x2), orOp(x3,x4));
    return answer;
}