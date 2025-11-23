t = int(input())
cases = []

for _ in range(t):
    dividend = int(input())
    divisor = int(input())
    cases.append((dividend, divisor))

for i, (dividend, divisor) in enumerate(cases):
    q = dividend // divisor
    r = dividend % divisor
    print(q)
    print(r)
    print()