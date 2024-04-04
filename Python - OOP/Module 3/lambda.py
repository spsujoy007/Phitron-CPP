squre = lambda num : num * num

result = squre(9)
# print(result)

multiple = lambda x, y : x + y
ans = multiple(5,5)
# print(ans)

numbers = [9, 6, 7, 10, 44, 100, 60]
doubled_nums = map(lambda x : x*2, numbers)
squred_nums = map(lambda x : x*x, numbers)
# print(numbers)
# print(list(squred_nums))

actors = [
    {"name": "Dhar Mann", "age": 39, "department": "Self"},
    {"name": "Cole LaBrant", "age": 27, "department": "Self"},
    {"name": "Ayden Mekus", "age": 18, "department": "Son / Nerd / Rich Son"},
    {"name": "Alan Stokes", "age": 27, "department": "Roy"},
    {"name": "Neela Jolene", "age": 18, "department": "Student 11 / Alicia / Student #3"}
]

juniors = filter(lambda actor : actor['age'] > 30, actors) ## filter function
print(list(juniors)) 
