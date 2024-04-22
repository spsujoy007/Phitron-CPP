from pytube import YouTube
from sys import argv

link = argv[1]
youtube = YouTube(link)

print("Title: ", youtube.views)
print("View: ", youtube.views)

resulation = youtube.get_highest_resolution()
resulation.download('https://www.youtube.com/watch?v=vEQ8CXFWLZU')