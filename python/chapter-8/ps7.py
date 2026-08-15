# Write a python function to remove a given word from a list and strip it at the same time
def remove_word(lst, word):
    return [item.strip() for item in lst if item.strip() != word]


words = ["  Harry  ", "Rohan", "  Aman", "Harry "]

print(remove_word(words, "Harry"))