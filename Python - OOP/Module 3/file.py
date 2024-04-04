# with open('message.txt', 'w') as file:
#     file.write("""Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries,""") #write text

# with open('message.txt', 'a') as file:
#     file.write(""". love you python\n""") ##append text

# with open('message.txt', 'r') as file:
#     text = file.read()
#     print(text)

file = open('message.txt', 'r')
print(file.read())