# Write a program using functions to find greatest of three numbers.
def greatest(a, b, c):
    if a > b and a > c:
        return a
    elif b > a and b > c:
        return b
    else:
        return c


a = int(input("Enter number a: "))
b = int(input("Enter number b: "))
c = int(input("Enter number c: "))

print("Greatest number is:", greatest(a, b, c))
