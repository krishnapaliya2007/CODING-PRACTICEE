# Write a program to read the text from a given file ‘poems.txt’ and find out whether it
# contains the word ‘twinkle’.
with open("chapter9/poems.txt", "r", encoding="utf-8") as f:
    text = f.read()

if "twinkle" in text.lower():
    print("The word 'twinkle' is present.")
else:
    print("The word 'twinkle' is not present.")
