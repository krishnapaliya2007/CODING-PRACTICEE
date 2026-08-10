# Write a program to accept marks of 6 students and display them in a sorted manner
subject = []

for i in range(6):
    marks = int(input("Enter marks: "))
    subject.append(marks)

subject.sort()

print(subject)