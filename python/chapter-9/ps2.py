# The game() function in a program lets a user play a game and returns the score as an
# integer. You need to read a file ‘Hi-score.txt’ which is either blank or contains the previous
# Hi-score. You need to write a program to update the Hi-score whenever the game()
# function breaks the Hi-score.
def game():
    return 100
score=game()

with open("Hi-score.txt","r") as f:
    old_score=f.read()

if old_score=="":
    old_score=0
else:
    old_score=int(old_score)
if score > old_score:
    with open("Hi-score.txt","w") as f:
        f.write(str(score))
        print("New Hi-score:",score)
else:
    print ("Hi-score remains:", old_score)