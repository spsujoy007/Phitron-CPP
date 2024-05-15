from fooditem import FoodItem
from menu import Menu
from users import User, Customer, Employee, Admin
from restaurant import Restaurent
from orders import Order

mamar_restaurent = Restaurent("Mamar Restaurent")
def customer_menu():
    name = input("Enter your name: ")
    email = input("Enter your email: ")
    phone = input("Enter your phone: ")
    address = input("Enter your address: ")
    customer = Customer(name = name, phone = phone, email = email, address = address)

    while(True):
        print(f"Welcome {customer.name}!")
        print("1. View menu")
        print("2. Add item to cart")
        print("3. View cart")
        print("4. Pay bill")
        print("5. Exit")
        

        choise = int(input("Enter your choise: "))
        if choise == 1:
            customer.view_menu(mamar_restaurent)
        elif choise == 2:
            itemname = input("Enter item name: ")
            itemquantity = int(input("Enter item quantity: "))
            customer.add_to_cart(mamar_restaurent, itemname, itemquantity)
        elif choise == 3:
            customer.view_cart()
        elif choise == 4:
            customer.pay_bill()
        elif choise == 5:
            break
        else:
            print("Invalid input!!")

def Admin_menu():
    
    name = input("Enter your name: ")
    email = input("Enter your email: ")
    phone = input("Enter your phone: ")
    address = input("Enter your address: ")
    admin = Admin(name = name, phone = phone, email = email, address = address)

    while(True):
        print(f"Welcome {admin.name}!")
        print("1. Add new item")
        print("2. Add employee")
        print("3. View employee")
        print("4. View Items")
        print("5. Delete itemm")
        print("6. Exit")

        choise = int(input("Enter your choise: "))
        if choise == 1:
            item_name = input("Enter item name: ")
            item_price = int(input("Enter item price: "))
            item_quantity = int(input("Enter item quantity: "))
            item_food = FoodItem(item_name, item_price, item_quantity)
            admin.add_menu_item(mamar_restaurent, item_food)

        elif choise == 2:
            name =input("Enter employee name: ")
            phone =input("Enter phone: ")
            address =input("Enter address: ")
            designation =input("Enter employee designation: ")
            age = input("Enter employee age: ")
            salary = input("Enter employee salary: ")
            employee = Employee(name, phone, email, address, age, designation, salary)
            admin.add_employee(mamar_restaurent, employee)

        elif choise == 3:
            admin.view_employees()

        elif choise == 4:
            admin.view_menu(mamar_restaurent)

        elif choise == 5:
            item = input("Enter item name: ")
            admin.remove_item(mamar_restaurent, item)
        elif choise == 6:
            break
        else:
            print("Invalid input!!")


while(True):
    print("Welcome! ")
    print("1. Customer")
    print("2. Admin")
    print("3. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        customer_menu()
    elif choice == 2:
        Admin_menu()
    elif choice == 3:
        break
    else:
        print("Wrong command!!!")
