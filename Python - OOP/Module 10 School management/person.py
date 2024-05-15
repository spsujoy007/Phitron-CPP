import random
from school import School
class Person:
    def __init__(self, name) -> None:
        self.name = name
    

class Teacher(Person):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def evaluate_exam(self):
        return random.randint(1, 100)

class Student(Person):
    def __init__(self, name, classroom):
        self.classroom = classroom
        self.__id = None
        self.marks = {} 
        self.subject_grade = {}
        self.grade = None
        super().__init__(name)

    def calculate_final_grade(self):
        sum = 0
        for grade in self.subject_grade.values():
            point = School.grade_to_value(grade)
            sum += point
        gpa = sum / len(self.subject_grade)

        self.grade = School.value_to_grade(gpa)

    @property
    def id(self):
        return self.__id
    
    @id.setter
    def id(self, value):
        self.__id = value