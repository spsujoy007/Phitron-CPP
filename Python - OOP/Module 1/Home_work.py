num1 = int(input("num 1: "))
num2 = int(input("num 2: "))
num3 = int(input("num 3: "))


print("Numbers are: ", num1, num2, num3)
if num1 > num2 and num1 > num3:
    print("Big is", num1)
elif num2 > num1 and num2 > num3:
    print("Big is", num2)
elif num3 > num1 and num3 > num2:
    print("Big is", num3)