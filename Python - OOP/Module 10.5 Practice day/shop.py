class Product:
    def __init__(self, name, price, quantity) -> None:
        self.name = name
        self.price = price 
        self.quantity = quantity

class Shop:
    def __init__(self, name):
        self.name = name
        self.products = []

    def add_product(self, product):
        self.products.append(product)
        print("___________________________________________")
        print(f"\n--- {product.name} added to the store.")

    def view_products(self, shop):
        print("\n- Products: ")
        print(f"Name\tPrice\tQuantity")
        print("------------------------")
        for product in shop.products:
            print(f'{product.name}\t{product.price}\t{product.quantity}')

    def buy_product(self, name, quantity):
        for product in self.products:
            if product.name == name:
                if product.quantity >= quantity:
                    product.quantity -= quantity
                    return print(f"Thank for purchase: {name}!")
                else:
                    return print("\n!!! Out of stock")
        
        print(f"\n!!! No product founded with '{name}'")