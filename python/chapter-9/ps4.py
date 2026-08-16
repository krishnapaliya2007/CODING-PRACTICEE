# A file contains a word “Donkey” multiple times. You need to write a program which
# replaces this word with ##### by updating the same file.


with open("chapter9/text.txt", "r", encoding="utf-8") as f:
    text = f.read()

text = text.replace("donkey", "#####")

with open("chapter9/text.txt", "w", encoding="utf-8") as f:
    f.write(text)