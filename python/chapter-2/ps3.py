text = input("Enter a string: ")

if text.find("  ") != -1:
    print("Double space is present.")
else:
    print("Double space is not present.")