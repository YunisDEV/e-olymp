n = int(input())
list1 = []

for _ in range(n):
  a, b = map(int,input().split())
  list1.append([a, b])

k = int(input())

list1.sort(key = lambda x : x[1])

counter = 0
for i in list1:
  counter += i[0]
  if (counter>=k):
    print(i[1])
    break
