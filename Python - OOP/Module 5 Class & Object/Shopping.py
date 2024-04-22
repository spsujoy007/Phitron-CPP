class Shop:
    def __init__ (self, name):
        self.name = name
        self.cart = []
    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(product)
    def checkout(self, ammount):
        total = 0
        for item in self.cart:
            # print(item)
            total += item['price'] * item['quantity']

        print(f'Your total bill: {total}$')

        if total > ammount:
            print(f'Tomay aro {total-ammount}$ dite hobe')
        elif total < ammount:
            print(f'Bill Paid. R tmi back paba: {ammount-total}$. Happy shopping!')
        else:
            print(f'Bill successfully paid.')
    def remove_item(self, name):
        self.cart.remove({'item':name})

rahul = Shop('Rahul')
rahul.add_to_cart('Alu', 10, 5)
rahul.add_to_cart('Perfume', 250, 2)
rahul.add_to_cart('WaterBottle', 5, 20)
rahul.remove_item('Alu')
rahul.checkout(650)