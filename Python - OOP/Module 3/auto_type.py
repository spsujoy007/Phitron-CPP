import pyautogui
from time import *

sleep(5)
for i in range(0, 11):
    pyautogui.write(f"{i*100}%", interval=0.02)
    pyautogui.press('enter')

# pyautogui.screenshot()
# pyautogui.screenshot('my_screenshot.png')

