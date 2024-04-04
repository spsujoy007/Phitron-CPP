numbers = [10, 65, 88, 99, 77, 65, 25]
print(numbers)

numbers.append(50)
print(numbers)

numbers.insert(0, 55)
print(numbers)

numbers.remove(10)
print(numbers)

numbers.pop(0)
print(numbers)

index = numbers.index(99)
print(index)

if 65 in numbers:
    print("ache")
else :
    print("Nai")

numbers.reverse()
print(numbers)