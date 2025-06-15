s = input().strip()
n = int(s)
if(n>0):
  print(s)
else:
  a = int(s[-1])
  b = int(s[-2])
  res = ""
  if (a>b):
    res = s[:len(s)-1]
  else:
    res = s[:len(s)-2] + s[-1]
  print(int(res))