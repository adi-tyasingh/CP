n = int(input())
str = input().strip()
a = str.count("A")
d = str.count("D")
if (a>d):
    print("Anton")
elif(d>a):
    print("Danik")
else:
    print("Friendship")