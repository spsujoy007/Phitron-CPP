from random import*

score = 0
for i in range(0,10):
    print("Let's play a guessing game!")
    num = int(input("Type a number between 1 to 3: "))

    if num == randint(1, 3):
        score+=1
        print("\nYou are lucky!\n")
    else: 
        print("\nYou loss!\n")

print(f"\n\nYour score: {score}\n\n")