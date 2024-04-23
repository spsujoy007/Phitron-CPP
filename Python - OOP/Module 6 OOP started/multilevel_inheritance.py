class Veichles:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price
    def __repr__(self) -> str:
        return f'{self.name} is running. Cost: {self.price}'

    def move(self):
        pass

class Bus(Veichles):
    def __init__(self, name, price, seat) -> None:
        self.seat = seat
        super().__init__(name, price)

class Truck(Veichles):
    def __init__(self, name, price, weight) -> None:
        self.weight = weight
        super().__init__(name, price)

class PickupTruck(Truck):
    def __init__(self, name, price, weight) -> None:
        super().__init__(name, price, weight)

class AcBus(Bus):
    def __init__(self, name, price, seat, temprature) -> None:
        self.temprature = temprature
        super().__init__(name, price, seat)
    def __repr__(self) -> str:
        return super().__repr__()
    

greenline = PickupTruck('Tata', 500500, 50, '0deg')
print(greenline)