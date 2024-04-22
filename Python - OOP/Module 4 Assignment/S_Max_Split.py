string = input()
getLR = []
size_of_str = len(string)
lrstring = ""
count_lr = 0

l_count, r_count = 0, 0

for i in range(size_of_str):
    if string[i] == 'L':
        l_count+=1
    else: 
        r_count+=1

    lrstring += string[i]
    if l_count == r_count:
        getLR.append(lrstring)
        l_count, r_count = 0, 0
        lrstring = ""
        count_lr+=1

print(count_lr)
for item in getLR:
    print(item)
