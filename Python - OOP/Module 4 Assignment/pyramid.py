import pyautogui
from time import sleep

lines = int(input("Enter num: "))

sleep(5) 
pyautogui.write(f"{lines}")
pyautogui.press('enter')
def my_machine():
    for i in range(lines):
        for j in range(i + 1):
            pyautogui.write('Love you gollu')
        pyautogui.press('enter')

my_machine()