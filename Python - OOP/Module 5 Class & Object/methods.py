class Phone:
    price = 14000
    brand = 'Samsung'
    color = 'Red'
    feature = ['4 camera', "2 Speaker", "Wifi"]

    def call(self):
        print("Calling a person")

    def message(self, phone, sms):
        return f'Sending Message To {phone}, SMS: {sms}'

my_phone = Phone();

print(my_phone.feature[0])
my_phone.call()
result = my_phone.message(26598, 'Missy! I missed to miss you.')
print(result)