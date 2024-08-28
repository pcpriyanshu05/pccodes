import math
import random
lb=int(input("Enter the lower bound "))
ub=int(input("Enter the upper bound "))
x=random.randint(lb,ub)
ming=math.ceil(math.log2(ub-lb+1))
print("\n\tYou've only ",ming, "chances to guess the integer!\n")
c=0
f=False
while c<ming:
    c+=1
    g=int(input("Guess a no.-"))
    if(x==g):
        print("Congratulations you did it in ",c," try")
        f=True
        break
    elif x>g:
        print("You guesses too small!")
    elif x<g:
        print("You guessed too high!")
if not f:
    print("\nThe no is %d" %x)
    print("\tBetter luck next time!")
