import pyautogui
from time import *

sleep(5)
for i in range(0,11):
    pyautogui.write(f"Hacking NASA {i*10}%", interval=0.10)
    pyautogui.press('enter')
# pyautogui.screenshot()
# pyautogui.screenshot('my_screenshot.png')

