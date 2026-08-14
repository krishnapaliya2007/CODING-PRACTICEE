## Write a program to find out whether a student has passed or failed if it requires a total of
# 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an
# input from the user.
sub1=int(input("enter marks of subject 1:"))
sub2=int(input("enter marks of subject 2:"))
sub3=int(input("enter marks of subject 3:"))
total=sub1+sub2+sub3
totalprcnt=(total/300)*100
if (totalprcnt >= 40 and sub1 >= 33 and sub2 >= 33 and sub3 >= 33) :
 print("passed")
else:
 print("failed")