#  Write a program to find out whether a file is identical and matches the content of another
# file.
with open("chapter9/log_file.txt", "r", encoding="utf-8") as f:
    file1 = f.read()

with open("chapter9/log_file_copy.txt", "r", encoding="utf-8") as f:
    file2 = f.read()

if file1 == file2:
    print("Both files are identical.")
else:
    print("Both files are not identical.")