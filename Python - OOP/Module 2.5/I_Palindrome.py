number = input()
reverse_number = number[::-1]

if number == reverse_number:
    print(number)
    print("YES")
else:
    print(int(reverse_number))
    print("NO")

# if I want to delete 0 from begin of a number just add this text in to a int
    #like int(055) output is: 55