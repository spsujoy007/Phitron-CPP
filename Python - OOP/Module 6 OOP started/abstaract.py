from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def eat(self):
        print('Hey nana! I am eating banana.')
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name) -> None:
        self.name = name
        self.category = "Monkey"
        super().__init__()
    def eat(self):
        print('Hey nana! I am eating banana.')
    def move(self):
        pass
layka = Monkey('Lucky')
layka.eat()
