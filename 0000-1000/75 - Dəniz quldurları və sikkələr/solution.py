a,m = map(int,input().split())

got = 0
count = 1

while (m-got)/2.0 != float(a):
    got+=a
    a+=1
    count+=1

print(count)