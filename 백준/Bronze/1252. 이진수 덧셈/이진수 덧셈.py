N, M = input().split()

N = int(N, 2)
M = int(M, 2)

result = bin(N + M)
result = result[2:]
print(f"{result}")