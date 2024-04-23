class Animal:
    def __init__(self, name) -> None:
        self.name = name
    
    def make_sound(self):
        print("\nAnimal making some sound!\n")

class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    def make_sound(self):
        print("Mew mewwww")

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    def make_sound(self):
        print("Ghew ghew")
class Goat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    def make_sound(self):
        print('Mah mahhhh')

don = Cat('Real done')
tom = Dog('Tom')
mess = Goat('L M')

# don.make_sound()
# tom.make_sound()

animals = [don, tom, mess]
for animal in animals:
    animal.make_sound()