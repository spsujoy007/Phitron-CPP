from users import Seller
from shop import Shop, Product
# seller = Seller("Rahul", "rahul@com", "1234")
# print(seller.name, seller.email, seller.gtpass)

nanarDokan = Shop("nanarDokan")


def SellerMenu():
    adminname = input("Enter your name: ")
    admingmail = input("Enter your email: ")
    password = input("Enter a password: ")

    admin = Seller(adminname, admingmail, password)

    print(f"\nWelcome to the shop {admin.name}!")

    while(True):
        print("\nChose your option: ")
        print("1. Add Product")
        print("2. View Products")
        print("3. Exit")
        cmd = int(input("Enter option: "))
        
        if cmd == 1:
            name = input("Product name: ")
            price = input("Price: ")
            quantity = int(input("Quantity: "))
            nanarDokan.add_product(Product(name, price, quantity))
        elif cmd == 2:
            nanarDokan.view_products(nanarDokan)
        elif cmd == 3:
            break
        else:
            print("Wrong command!")

def CustomerMenu():
    customername = input("Enter your name: ")
    customergmail = input("Enter your email: ")
    password = input("Enter a password: ")

    customer = Seller(customername, customergmail, password)

    print(f"\nWelcome to the shop {customer.name}!")
    while(True):
        print("\nChose your option: ")
        print("1. View Products")
        print("2. Buy A Product")
        print("3. Exit")
        cmd = int(input("Enter option:"))
        if cmd == 1:
            nanarDokan.view_products(nanarDokan)
        elif cmd == 2:
            name = input("Product name: ")
            quantity = int(input("Product quantity: "))
            nanarDokan.buy_product(name, quantity)
        elif cmd == 3:
            break;

while(True):
    print("\nChose your option: ")
    print("1. Seller")
    print("2. Customer")
    print("3. Exit")
    cmd = int(input("Enter option: "))
    if cmd == 1:
        SellerMenu()
    elif cmd == 2:
        CustomerMenu()
    elif cmd == 3:
        break

# product1 = Product("Pasta", 100, 5)
# product2 = Product("Burger", 150, 20)
# product3 = Product("Pizza", 180, 20)

# myshop.add_product(product1)
# myshop.add_product(product2)
# myshop.add_product(product3)

# # myshop.view_products(myshop)

# myshop.buy_product("Pasta", 4)
# myshop.buy_product("Burger", 8)
# myshop.buy_product("Pizza", 10)
# myshop.view_products(myshop)