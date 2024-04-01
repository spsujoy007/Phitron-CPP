money = 5000

def credit(newMoney):
    # we can use global variable but if we want to modify we have to use global keyword
    global money
    print(f"Ager taka: {money}");
    money = money+newMoney
credit(6000)
print("Porer taka: ", money)