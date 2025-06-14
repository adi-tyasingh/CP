str1=input()
str2=input()
str1=str1.lower()
str2=str2.lower()
flag=True
for i in range(len(str1)):
  diff = ord(str1[i])-ord(str2[i])
  if(diff != 0):
    flag=False
    if(diff<0):
      print("-1")
    else:
      print("1")

    break

if(flag):
  print("0")

