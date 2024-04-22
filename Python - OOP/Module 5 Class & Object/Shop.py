class Shop:
    cart = []
    def __init__(self, buyer):
        self.buyer = buyer
    def add_to_cart(self, item):
        self.cart.append(item)

mehu = Shop('Mehu')
mehu.add_to_cart('Shoes')
mehu.add_to_cart('Phone')
# print(mehu.cart)

nishu = Shop('Nishu')
nishu.add_to_cart('Watch')
nishu.add_to_cart('Computer')
print(nishu.cart)