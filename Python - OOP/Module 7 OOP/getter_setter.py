class User:
    def __init__(self, name, age, money) -> None:
        self._name = name
        self._age = age  
        self.__money = money 

    @property # use privet data with property
    def age(self):
        return self._age
    
    @property
    def salary(self):
        return self.__money
    
    @salary.setter # to change something from outside
    def salary(self, money):
        self.__money += money

samsu = User('kuddus', 51, 5000)
print(samsu.salary)

samsu.salary = 4000
print(samsu.salary)
