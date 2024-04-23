class Laptop:
    def __init__(self, brand, price, color, memory) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory
        
    def run(self):
        return f'Laptop is running on {self.brand}'
    
class Phone:
    def __init__(self, brand, price, color, dual_sim ) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.dual_sim = dual_sim
        pass
    def run(self):
        return f'camera is running'
    
    def call(self, phone, sms):
        return f'sending sms to number {phone}. your message is: "{sms}" '

joy = Laptop('Asus', 52000, 'black', '16gb')
print(joy.run())

rahul = Phone('xiomi', 54545, 'red', 'dual-sim')
print(rahul.call(88017898959, "i love all"))
