class Bank:
    def __init__(self, holder_name, initial_deposite) -> None:
        self.holder_name = holder_name
        self._branch = "Bonani Dhaka" #protected
        self.__balance = initial_deposite # private
    def deposite(self, amount):
        self.__balance += amount
    def get_balance(self):
        return self.__balance
    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Fokira taka nai'

rafsun = Bank('Cooto bro', 10000)
rafsun.holder_name = 'Boro vai' #changing name

print(rafsun.holder_name)

rafsun.__balance = 0 # try to change but not working for private data
rafsun.deposite(5000)

# print(rafsun.get_balance())
# print(def(rafsun))
print(rafsun._Bank__balance)