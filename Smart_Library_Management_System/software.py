#for voice based search
import mysql.connector
import speech_recognition as sr
import pyaudio

#for genre
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

connection = mysql.connector.connect(user='root',password='',host='localhost',database="library")
cursor = connection.cursor()

r = sr.Recognizer()
with sr.Microphone() as source:
    print("say book name you want to search")
    audio = r.listen(source)
    print("time over. thanks")

try:
    requestedBook = r.recognize_google(audio) #speak in english and get answer in english
    print("you asked for: " + requestedBook)
    query = "select bname from book where bname='" + requestedBook  + "'"
    cursor.execute(query)
    data = cursor.fetchall()
    #print(data)

    if len(data):
        print('book is available')

        # for book genre
        browser = webdriver.Chrome(executable_path='C:/Users/DELL/Desktop/chromedriver_win32/chromedriver.exe')
        browser.get('https://www.google.com/')
        box = browser.find_element_by_class_name('gLFyf')
        box.send_keys(data[0][0] + " genre")
        box.send_keys(Keys.ENTER)

    else:
        print('no book found')
except:
    pass
