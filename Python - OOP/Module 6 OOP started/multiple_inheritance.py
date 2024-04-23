class Family:
    def __init__(self, address):
        self.address = address

class School:
    def __init__(self, id, level) -> None:
        self.id = id
        self.level = level
        pass

class Sports:
    def __init__(self, game) -> None:
        self.game = game

class Student(Family, School, Sports):
    def __init__(self, address, id, level, game) -> None:
        Family.__init__(self, address)
        School.__init__(self, id, level)
        Sports.__init__(self, game)
    def __repr__(self) -> str:
        return f'Playing "{self.game}" in our school {self.address}'
    
joy = Student('Panchagarh', 2, 5, 'Java')
print(joy)
