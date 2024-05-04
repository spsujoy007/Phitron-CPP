class Shopping:
    item = [] 
    c_region= 'china'

    def __init__(self, name, location) -> None:
        self.name = name
        self.location = location

    # @classmethod  # with classmethod i can call with self but not count it
    @staticmethod  # with staticmethod I can call with out self
    def purchase(item, price, amount):
        remaining = amount-price
        print(f'buying {item} for price {price} and remaining: {remaining}')

Shopping.purchase('alu',10,100)