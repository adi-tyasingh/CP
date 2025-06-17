st=input()
lst=st.split("+")
nlst=[]
for n in lst:
  nlst.append(int(n))

nlst=sorted(nlst)

for i in range(len(nlst)-1):
  print(str(nlst[i]), end = "+")

print(nlst[len(lst)-1])
    