number = input()
maximum = "0"
for i in range(len(number)-1):
    for j in range(i+1,len(number)):
        if i==j:
            continue
        comb = number[i] + number[j]
        maximum = comb if comb > maximum else maximum
print(maximum)