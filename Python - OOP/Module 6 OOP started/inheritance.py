class Devices:
    def __init__(self, type, brand, price, color) -> None:
        self.brand = brand
        self.price = price 
        self.color = color
        self.type = type
    def run(self):
        return f'{self.type} is running on {self.brand}'

class Laptop(Devices):
    def __init__(self, type, brand, price, color, memory, ssd) -> None:
        self.memory = memory
        self.ssd = ssd
        super().__init__(type, brand, price, color)
    
class Phone(Devices):
    def __init__(self, type, brand, price, color, dual_sim ):
        self.dual_sim = dual_sim
        super().__init__(type, brand, price, color)

class Camera(Devices):
    def __init__(self, type, brand, price, color, lens):
        self.lens = lens
        super().__init__(type, brand, price, color)
    def change_lens(self, lens):
        pass

# joy = Laptop('Asus', 52000, 'black', '16gb')
# print(joy.run())

rahulPhone = Phone('Phone', 'xiomi', 54545, 'red', 'dual-sim')
rahulLaptop = Laptop('Laptop', 'Asus', 52000, 'black', '16gb', '226gb')
print(rahulPhone.run())
print(rahulLaptop.run())

