import random
tajni = random.randint(1,100)

print('Zamislio sam jedan broj od 1 do 100.\n\n')

n = 0

while True:
    x = int(input('Pogodi broj: '))

    n+=1

    if x < tajni:
        print('Moj zamisljeni broj je veci.\n\n')

    if x > tajni:
        print('Moj zamisljeni broj je manji.\n\n')

    if x == tajni:
        print('Bravo, pogodio si u ', n, '-tom pokusaju.')
        break
