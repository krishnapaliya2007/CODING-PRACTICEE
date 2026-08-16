# Write a program to mine a log file and find out whether it contains ‘python’
with open("chapter9/log_file.txt", "r", encoding="utf-8") as f:
    text = f.read()

if "python" in text.lower():
    print("The word 'python' is present.")
else:
    print("The word 'python' is not present.")