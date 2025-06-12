str1 = input().strip()
str2 = input().strip()
flag = True
if (len(str1) != len(str2)):
    flag = False
if(flag):    
    for i in range(len(str1)):
        if (str1[i] !=  str2[len(str1)-i-1]):
            flag = False

if flag:
    print("YES")
else:
    print("NO")