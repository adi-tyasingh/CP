st=input("")
vow=['a','e','i','o','y','u','A','E','I','O','U','Y']
ans=""
for char in st:
  if char not in vow:
    ans += '.'
    ans += char.lower()
print(ans)


