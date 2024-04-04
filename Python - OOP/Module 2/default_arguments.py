""" def sum(num1, num2, num3, num4=0, num5=0):
    return num1+num2+num3+num4+num5
total = sum(5,10) """
# print(total)


def all_sum(num1, num2, *numbers):
    sum = 0;
    for num in numbers:
        sum+=num;
    print(sum)
    return sum+num1+num2;

total = all_sum(8,10,60,80,10,32)
print(total)