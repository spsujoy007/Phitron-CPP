from school import School
from person import Student, Teacher
from subject import Subject
from classroom import ClassRoom

schoool = School("BP Govt High School", "Panchagarh")

eight = ClassRoom("eight")
nine = ClassRoom("nine")
ten = ClassRoom("ten")

schoool.add_classRoom(eight)
schoool.add_classRoom(nine)
schoool.add_classRoom(ten)

# adding student
rahul = Student('Rahul', eight)
nishu = Student('Nishu', nine)
mita = Student('Mita', ten)
lota = Student('Lota', ten)

# admission
schoool.student_admission(rahul)
schoool.student_admission(nishu)
schoool.student_admission(mita)
schoool.student_admission(lota)

# adding teacher
abul = Teacher("Abul khan")
babul = Teacher("babul khan")
Bulbul = Teacher("Bulbul khan")

# adding subject
bangla = Subject("Bangla", abul)
english = Subject("English", babul)
history = Subject("History", Bulbul)
science = Subject("Science", Bulbul)

#class eight
eight.add_subjects(bangla)
eight.add_subjects(english)
eight.add_subjects(history)
# class nine
nine.add_subjects(bangla)
nine.add_subjects(english)
nine.add_subjects(history)
nine.add_subjects(science)
# class ten
ten.add_subjects(bangla)
ten.add_subjects(english)
ten.add_subjects(history)
ten.add_subjects(science)

eight.semister_finall_exam()
print(schoool)