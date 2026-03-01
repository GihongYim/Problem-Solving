#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, P, T;
    cin >> N >> P >> T;
    
    long long total_arms = 2*N;
    long long period = 4*N - 2;
    
    long long pos = (T-1) % period;
    long long count;
    if(pos <= 2*N-1) count = pos+1;
    else count = 4*N-1-pos;
    
    long long full = (T-1) / period;
    long long rem = (T-1) % period;
    
    long long sum_rem = 0;
    if(rem <= 2*N){
        sum_rem = rem*(rem+1)/2;
    } else {
        long long extra = rem - 2*N;
        sum_rem = N*(2*N+1) + extra*(2*N-1) - extra*(extra-1)/2;
    }
    
    long long period_sum = (2*N+1)*(2*N-1);
    long long total_before = full * period_sum + sum_rem;
    long long start_arm = total_before % total_arms;
    
    long long h1 = 2*(P-1);
    long long h2 = 2*P-1;
    
    auto inRange = [&](long long arm) -> bool {
        if(count >= total_arms) return true;
        long long end_arm = (start_arm + count - 1) % total_arms;
        if(start_arm <= end_arm){
            return arm >= start_arm && arm <= end_arm;
        } else {
            return arm >= start_arm || arm <= end_arm;
        }
    };
    
    if(inRange(h1) || inRange(h2)){
        cout << "Dehet YeonJwaJe ^~^" << endl;
    } else {
        cout << "Hing...NoJam" << endl;
    }
    
    return 0;
}