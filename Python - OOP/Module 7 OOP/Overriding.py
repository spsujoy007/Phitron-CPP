class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age 
        self.height = height
        self.weight = weight
    def eat(self):
        print('Vat r dal torkari')
    def excercise(self):
        raise NotImplementedError
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)
    def eat(self):
        print("Vegetables")

    def __mul__(self, other):
        return self.weight * other.weight

    def excercise(self):
        print("Gym e poisa diya gham jhoray")
    def __gt__(self, other) :
        return self.age > other.age

sakib = Cricketer('sakib', 35, 68, 91, 'BD')
rakib = Cricketer('rakib', 30, 85, 86, 'BD')
# sakib.eat()
# sakib.excercise()

print(45+5)
print('sujoy'+'paul')
print([12,98]+[5,6,8,8,1])
print(sakib * rakib)
print(sakib > rakib)