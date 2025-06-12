n = int(input(""))
dic = {}
for i in range(n):
    team = input().strip()
    if (team not in dic):
        dic[team] = 1
    else:
        dic[team] += 1
max = -1
for i in dic.keys():
    if(dic[i]>max):
        max = dic[i]
for i in dic.keys():
    if(dic[i] == max):
        print(i)