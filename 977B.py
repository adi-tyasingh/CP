import sys
import math
from collections import defaultdict, deque
from bisect import bisect_left, bisect_right
from heapq import heappush, heappop
from itertools import permutations, combinations

# Fast input
input = lambda: sys.stdin.readline().strip()

# Constants
MOD = 10**9 + 7
INF = float('inf')

# Binary Exponentiation (a^b) % mod
def binpow(a, b, mod=MOD):
    result = 1
    a %= mod
    while b > 0:
        if b & 1:
            result = (result * a) % mod
        a = (a * a) % mod
        b >>= 1
    return result

# GCD and LCM
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

# Sieve of Eratosthenes
def sieve(n):
    is_prime = [True] * (n + 1)
    is_prime[0:2] = [False, False]
    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            for j in range(i*i, n + 1, i):
                is_prime[j] = False
    return is_prime

# Debug helper
def debug(*args):
    print("DEBUG:", *args, file=sys.stderr)

# Main solve function
def solve():
    n = int(input())
    s = input().strip()
    mx = 0
    res = ""
    for i in range(0, n-1):
        tg = s[i:i+2]
        temp = 0
        for i in range(0, n-1):
            if s[i:i+2] == tg:
                temp+=1
        if temp>mx:
            mx = temp
            res = tg
    print(res)

def main():
    t = 1
    for _ in range(t):
        solve()

if __name__ == '__main__':
    main()
