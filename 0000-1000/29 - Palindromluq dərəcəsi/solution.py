def pow(a,b):
    result = 1
    for i in range(b):
        result *= a
    return result

def reversedNum(num):
    num = str(num)[::-1]
    return int(num)

def isPalindrome(num):
    return num==reversedNum(num)

num = int(input())
degree = 0

for i in range(10000):
    if not isPalindrome(num):
        num+=reversedNum(num)
        degree+=1
    else:
        break

print(degree)