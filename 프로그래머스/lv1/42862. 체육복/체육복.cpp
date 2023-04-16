#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> v( n + 1 );
    
    for(int i = 1; i <= n; i++){
        v[i] = 1;
    }
    for(int i = 0; i < lost.size(); i++){
        v[lost[i]]--;
    }
    for(int i = 0; i < reserve.size();i++){
        v[reserve[i]]++;
    }
    for(int i = 1; i <= n; i++){
        if(v[i] == 2){
            if(i - 1 >= 1 && v[i-1]==0){
                v[i-1] = 1;
                v[i] = 1;
            }
            else if(i + 1 <= n && v[i+1]==0){
                v[i+1] = 1;
                v[i] = 1;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(v[i]>=1)answer++;
    }
    
    return answer;
}