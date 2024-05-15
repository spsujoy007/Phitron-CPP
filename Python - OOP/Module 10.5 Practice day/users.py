class Account:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email 
        self.__password = password
    
    @property
    def gtpass(self):
        return self.__password

class Seller(Account):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)

class Customer(Account):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)