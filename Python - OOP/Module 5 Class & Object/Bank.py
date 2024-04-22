class Bank:
    def __init__ (self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000
    def get_balance(self):
        return self.balance
    def deposite(self, ammount):
        if ammount > 0:
            self.balance += ammount 

    def withdraw(self, ammount):
        if ammount < self.min_withdraw:
            return f'Hey fokinni! Minimun withdraw {self.min_withdraw}' 
        elif ammount > self.max_withdraw:
            return f'Bank fokir hoye jabe! Max withdraw limit {self.max_withdraw}'
        else:
            self.balance -= ammount
            return f'Here is your money {self.balance}'
        
brack = Bank(50000)
print(brack.get_balance)
print(brack.withdraw(200))
