k, l = input().split()
k = int(k)
l = int(l)

for i in range(2, l):
    if k % i == 0:
        print("BAD " + str(i))
        exit(0)

print("GOOD")