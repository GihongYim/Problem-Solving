from sys import stdin

for _ in range(3):
    N = int(stdin.readline())
    S = 0
    for _ in range(N):
        S = S + int(stdin.readline())
    
    if S == 0:
        print("0");
    elif S > 0:
        print("+")
    else :
        print("-");