a,b = map(int,input().split())

k = int((a+b)/2)

print(k if abs(a-k) == abs(b-k) else '-')