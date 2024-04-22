class Phone:
    manufatured = 'china'
    def __init__ (self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

myphone = Phone('Sujoy', 'MiPhone', 25000)
myphone2 = Phone('Patul', 'MiPhone 2', 30000)
print(myphone.brand, myphone.price, myphone2.owner)