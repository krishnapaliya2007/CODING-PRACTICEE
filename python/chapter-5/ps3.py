# A spam comment is defined as a text containing following keywords: “Make a lot of
# money”, “buy now”, “subscribe this”, “click this”. Write a program to detect these spams.
msg = input("Write a comment: ")

if ("make a lot of money" in msg or
    "buy now" in msg or
    "subscribe this" in msg or
    "click this" in msg):
    print("Spam")
else:
    print("Ok ji")