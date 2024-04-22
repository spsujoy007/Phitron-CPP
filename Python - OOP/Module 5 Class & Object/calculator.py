class Calculate:
    brand = "Casio MS-990"

    def add( num1, num2):
        return num1 + num2
    
    def deduct( num1, num2):
        return num1 - num2
    
    def multiply( num1, num2):
        return num1 * num2
    
    def divide( num1, num2):
        return num1 / num2

num1, num2 = 10, 5
print('Add:', Calculate.add(num1, num2))
print('Deduct:', Calculate.deduct(num1, num2))
print('Multiply:', Calculate.multiply(num1, num2))
print('Divide:', Calculate.divide(num1, num2))