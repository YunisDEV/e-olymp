def COMPARSION(p1, p2):
  return min(p1[0],p2[1]) < min(p2[0],p1[1])

def sortPr(arr):
  n = len(arr)
  for i in range(n-1):
    for j in range(0,n-i-1):
      if not COMPARSION(arr[j],arr[j+1]):
        arr[j],arr[j+1] = arr[j+1],arr[j]
  return arr

n = int(input())
pr = []
result = 0
a = 0

for i in range(n):
  inputt = [0,0]
  pr.append(inputt)

for i in range(2):
  inp = list(map(int,input().split()))
  for j in range(len(inp)):
    pr[j][i] = inp[j]
    
pr = sortPr(pr)

for i in range(len(pr)):
  a += pr[i][0]
  result = max(result,a) + pr[i][1]

print(result)