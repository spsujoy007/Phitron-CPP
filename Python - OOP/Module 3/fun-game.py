# print("I can tell your name!")
# guessName = input("Type your name reversely: ")
# print(f"Your name is: {guessName[::-1].title()}")

import turtle
turtle.bgcolor('black')
t = turtle.Turtle()
colors = ['red', 'dark red']
for number in range(400):
    t.forward(number+1)
    t.right(89)
    t.pencolor(colors[number%2])
turtle.done()