a,b = map(int,input().split(' '))
print(b-sum([i+1 for i in range(b-a)]))