numbers = [10, 65, 88, 99, 77, 65, 25]
odds=[]

for num in numbers:
    if num % 2 == 1:
        odds.append(num)
print(odds)

odd_nums = [num for num in numbers if num % 2 == 1]
print("ODDS: ", odd_nums)

