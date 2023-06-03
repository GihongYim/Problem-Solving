#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    int s,e;
    char temp;
    for (unsigned int i = 0; i < queries.size(); i++)
    {
        s = queries[i][0];
        e = queries[i][1];
        while (s < e)
        {
            temp = my_string[s];
            my_string[s] = my_string[e];
            my_string[e] = temp;
            s++;
            e--;
        }
    }
    return my_string;
}