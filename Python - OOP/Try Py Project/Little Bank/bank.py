balance = 0
def deposit(money):
    global balance
    balance+=money
    print(f"Informations: {money}tk deposit. Current balance {balance}tk. Money added to the main balance successfully. Happy life")
    
def withdraw(money):
    global balance
    balance-=money
    print(f"Informations: {money}tk withdraw. Current balance {balance}tk. Money withdraw successful. Happy life")
    
def send_money(money, reciver_id):
    global balance
    balance-=money
    history = (money, balance, reciver_id)
    print(f"Informations: {money}tk sended. Current balance {balance}tk. Reciver id: {reciver_id}. Money sended successfully to {reciver_id}. Happy life")
    
print("Deposit  - 1")
print("Withdraw - 2")
print("Send     - 3")
todo = int(input("Press with 1, 2 or 3: "))

if todo == 1:
    money = int(input("Deposit money: "))
    deposit(money)
elif todo == 2:
    money = int(input("Withdraw money: "))
    withdraw(money)
elif todo == 3:
    money = int(input("Send money: "))
    reciver_id = input("Enter reciver bank id: ")
    send_money(money, reciver_id)