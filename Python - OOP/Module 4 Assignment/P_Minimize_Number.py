n = int(input())
arr = list(map(int,input().split()))
count = 0
while True:
    flag = True
    for i in range(len(arr)):
        if arr[i] % 2 != 0:
            flag=False
            break
    if flag:
        for i in range(len(arr)):
            arr[i] //= 2
        count += 1
    else:
        break
print(count)