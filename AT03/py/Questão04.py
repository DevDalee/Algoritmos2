import random

d1 = random.randint(1, 6)
d2 = random.randint(1, 6)

x = d1 + d2
y = 0 

if x == 7 or x == 11:
    print("Soma dos dados {} + {} = {}\n".format(d1,d2,x))
    print("O jogador ganhou :)")
elif x == 2 or x == 3 or x == 12:
    print("Soma dos dados {} + {} = {}\n".format(d1,d2,x))
    print("O jogador perdeu :(")
else: 
    while(x != y):
        d1 = random.randint(1, 6)
        d2 = random.randint(1, 6)
        y = d1 + d2
    if y == 7: 
        print("Soma dos dados {} + {} = {}\n".format(d1,d2,y))
        print("O jogador perdeu :(")
    elif x == y:
        print("Soma dos dados {} + {} = {}\n".format(d1,d2,y))
        print("O jogador ganhou :)")