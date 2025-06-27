def gcd(a, b):
    if a == 0:
        return b
 
    return gcd(b % a, a)

def sumDigits(n):
    st = str(n)
    sum = 0
    for ch in st:
        sum += int(ch)
    return sum

T = int(input())
while (T > 0):
    n = int(input())
    if (gcd(n,sumDigits(n))>1):
        print(n)
    elif (gcd(n+1,sumDigits(n+1))>1):
        print(n+1)
    elif (gcd(n+2,sumDigits(n+2))>1):
        print(n+2)
    else:
        print(n+3)

    T -= 1