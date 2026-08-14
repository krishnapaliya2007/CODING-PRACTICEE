# Write a program which finds out whether a given name is present in a list or not.
names = ["Krishna", "Rahul", "Aman", "Riya", "Priya"]

name = input("Enter a name: ")

if name in names:
    print("Name is present in the list")
else:
    print("Name is not present in the list")