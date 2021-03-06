u = []
v = []
s = 0
n = int(input())
f = n
j = n
m = n*2
for i in range(m):
    x,y = map(int,input().split())
    r = y-x
    u.append([r,x])
    v.append([r,y])

u.sort(key=lambda x:x[0])
v.sort(key=lambda x:x[0], reverse=True)

for i in range(m):
    if f==0:
        break
    s = s + u[i][1]
    f-=1
for i in range(m):
    if j==0:
        break
    s = s + v[i][1]
    j-=1

print(s)