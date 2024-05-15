from abc import ABC
from orders import Order
from menu import Menu
from restaurant import Restaurent

class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address

# admin - admin can add a employee
class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)

    def add_employee(self, restaurent, employee):
        restaurent.add_employee(employee)

    def view_employees(self, restaurent):
        restaurent.view_employees()

    def add_menu_item(self, restaurent, item):
        restaurent.menu.add_menu_item(item)

    def remove_item(self, restaurent, item_name):
        restaurent.menu.remove_item(item_name)

    def view_menu(self, restaurent):
        restaurent.menu.show_menu()

class Employee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        super().__init__(name, phone, email, address)
        self.age = age
        self.designation = designation
        self.salary = salary

class Customer(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.cart = Order()

    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    def add_to_cart(self, restaurant, item_name, quantity):
        item = restaurant.menu.find_item(item_name)
        if item:
            if quantity > item.quantity:
                print("Item quantity exceeded")
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print("Item added to cart")
        else:
            print("Item not found")

    def view_cart(self):
        print("------ view cart -------")
        print("Name\tPrice\tQuantity")
        for item, quantity in self.cart.items.items():
            print(f"{item.name}\t{item.price}\t{quantity}")
        print(f"\nTotal price: {self.cart.total_price}tk")
    
    def pay_bill(self):
        print(f"Total: {self.cart.total_price} paid successfully")
        self.cart.clear()


class FoodItem:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

# admin = Admin('Rahul', 1255454, 'rahul@gm.com', 'Rangpur')
# admin.add_employee('joy',  21254, 'joy@gmail.com', 'Dhaka', 20, 'Chef', 20000)
# admin.add_employee('Golu',  56565, 'golu@gmail.com', 'Rangamati', 19, 'DR', 90000)
# admin.view_employees()

# menu = Menu()
# mamar_resturant = Restaurent("Mamar resturant")
# item = FoodItem("Pizza", 100, 5)
# item2 = FoodItem("Cake", 20, 10)
# menu.add_menu_item(item)
# menu.add_menu_item(item2)
# # menu.show_menu()

# admin = Admin("Joy", 5656556, "joy@gmail.com", 'Comilla')
# admin.add_menu_item(mamar_resturant, item)
# admin.add_menu_item(mamar_resturant, item2)

# customer = Customer('Rahul', 6656, 'rahul@mgai.com', 'dhaka')
# customer.view_menu(mamar_resturant)

# item_name = input("Enter item name: ")
# item_quantity = int(input("Item quantity: "))

# customer.add_to_cart(mamar_resturant, item_name, item_quantity)
# customer.view_cart()
