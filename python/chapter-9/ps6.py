with open("chapter9/log_file.txt", "r", encoding="utf-8") as f:
    lines = f.readlines()

line_number = 1

for line in lines:
    if "python" in line.lower():
        print("Python is present in line number:", line_number)
    line_number += 1