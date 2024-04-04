from random import*
from time import*

boys = ["Sakib", "Rakib", "Chadu", "Minku"]
print(choice(boys))

time = localtime()
print(f"{time.tm_hour}:{time.tm_min}:{time.tm_sec}")

for i in range(0,11):
    sleep(1)
    for j in range(0, i):
        print("$", end="")
    print(f"NASA hacking in progress [ {i*10}% ]")

print("NASA hacked! Now you are the owner of NASA")