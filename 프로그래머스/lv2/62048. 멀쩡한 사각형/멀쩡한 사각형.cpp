using namespace std;

int gcd(int a, int b){
    int tmp, n;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    
    while(b!=0){
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}

long long solution(int w,int h) {
    long long tmp;
    if(w>h){
        tmp = w;
        w = h;
        h = tmp;
    }
    long long answer = 1;
    tmp = gcd(w,h);
    long long w2,h2;
    w2 = (long long)w/tmp;
    h2 = (long long)h/tmp;
   
    answer = (long long)w * (long long)h - (w2 + h2 - 1) * tmp;
    
    return answer;
}