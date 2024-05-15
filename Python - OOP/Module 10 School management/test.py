def grade_to_value(grade):
    grade_map = {
        'A+' : 5.00,
        'A' : 4.00,
        'A-' : 3.50,
        'B' : 3.00,
        'C' : 2.00,
        'D' : 1.00,
        'F' : 0.00
    }
    return grade_map[grade]

print(grade_to_value('A+'))