# Write a program to sum a list with 4 numbers.
numbersum=[]
for i in range(4):
    numbers=int(input("enter the numbers:"))
    numbersum.append(numbers)
    print(sum(numbersum))