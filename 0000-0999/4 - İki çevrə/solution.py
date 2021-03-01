from math import sqrt

x1, y1, r1, x2, y2, r2 = map(float, input().split())
d = sqrt((x2-x1)**2 + (y2-y1)**2)

if d == 0:
    print(-1 if abs(r1-r2) < 2**-54 else 0)
elif d == r1+r2 or d == abs(r1-r2):
    print(1)
elif d > abs(r1-r2) and d < (r1+r2):
    print(2)
else:
    print(0)