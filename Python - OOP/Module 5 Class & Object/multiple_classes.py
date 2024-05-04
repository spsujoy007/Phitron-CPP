class Student:
    def __init__(self, name, id, current_class):
        self.name = name
        self.id = id
        self.current_class = current_class
    def __repr__(self) -> str: #represent datas
        return f'Student of class: {self.current_class}, name: {self.name}, id: {self.id}'

class Teacher:
    def __init__(self, name, subject, id):
        self.name = name
        self.subject = subject
        self.id = id
    def __repr__(self) -> str:
        return f'{self.name} is a teacher and he teach {self.subject}. ID: {self.id}'
rahul = Student('Rahul', 5, 11)
anowar = Teacher('Anowar', 'ICT', 22)

print(rahul)
print(anowar)