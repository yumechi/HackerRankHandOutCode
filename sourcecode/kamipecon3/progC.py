MOD = 1000000007

def gcd(a, b):
    if a < b:
        a,b = b,a
    while b > 0:
        r = a % b
        a,b = b,r
    return a

n = int(input())
arr = [int(i) for i in input().split()]
arr.sort()
numer = 1
denom = 1
for i in range(n//2):
    numer *= arr[i]
    denom *= arr[n-1-i]

divnum = gcd(numer, denom)
numer //= divnum;
numer %= MOD;
denom //= divnum;
denom %= MOD;
print(int(denom), int(numer))
