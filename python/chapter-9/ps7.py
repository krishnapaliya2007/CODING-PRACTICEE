with open("chapter9/log_file.txt", "r", encoding="utf-8") as f:
    text = f.read()

with open("chapter9/log_file_copy.txt", "w", encoding="utf-8") as f:
    f.write(text)