class Product:
    def __init__(self, name, pid, quantity, price):
        self.name = name
        self.id = pid 
        self.quantity = quantity
        self.price = price

class Shop:
    def __init__(self, name, address) -> None:
        self.name = name
        self.address = address
        self.products = []

    def buy_product(self, product_name):
        isProduct = False
        getProduct = None
        for product in self.products:
            if product.quantity > 0 and product.name == product_name:
                isProduct = True
                getProduct = product
                break
        if isProduct:
            print('- Yes take your product! Thank you so much')
            # self.products.remove(getProduct)
            getProduct.quantity -= 1
        else:
            print(f'- No product available with "{product_name}"')

    def add_product(self, name, id, quantity, price):
        # Correct the typo here: it should be "Product", not "Prouduct"
        product_data = Product(name, id, quantity, price)
        self.products.append(product_data)

    def show_products(self):
        for product in self.products:
            print(f'Product name: {product.name}, quantity: {product.quantity}')

myshop = Shop('SP-shop', 'Dhaka')
myshop.add_product('Phone', 101, 4, 90000)
myshop.add_product('Soap', 102, 10, 200)
# myshop.show_products()
myshop.show_products()
myshop.buy_product('Phone')
myshop.show_products()
myshop.buy_product('Phone')
myshop.show_products()
myshop.buy_product('Phone')
myshop.show_products()
myshop.buy_product('Phone')
myshop.show_products()
myshop.buy_product('Phone')
