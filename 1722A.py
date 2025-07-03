t=int(input(""))
while(t>0):
  n=int(input())
  s=input("")
  if n>5:
    print("NO")
  elif 'T' not in s : 
    print("NO")
  elif 'i' not in s : 
    print("NO")
  elif 'm' not in s : 
    print("NO")
  elif 'u' not in s : 
    print("NO")
  elif 'r' not in s : 
    print("NO")
  else:
    print("YES")
  t-=1
