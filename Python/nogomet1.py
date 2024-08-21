from turtle import *
from random import *
title('Nogomet')
setup(width=600, height=500)  
tracer(0)   


kornjaca=Turtle()
kornjaca.shape('turtle') 
kornjaca.shapesize(2,2)   
kornjaca.up()    
kornjaca.goto(0,100)  


boje_kornjace = ["red","green","yellow","black","pink"]
def naprijed():
    kornjaca.fd(30)   
def natrag():
    kornjaca.bk(30)
def lijevo():
    kornjaca.lt(30)
def desno():
    kornjaca.rt(30)



onkey(naprijed, 'Up')
onkey(natrag, 'Down')
onkey(lijevo, 'Left')
onkey(desno, 'Right')
listen()      





lopta=Turtle()
stativa1 = Turtle()        #prva stativa
stativa1.shape("circle")
stativa1.color("green")
stativa1.pu()
stativa1.shapesize(0.40,0.40)
stativa1.goto(270,100)


stativa1.pd()
stativa1.goto(270,0)
stativa1.goto(270,100)


stativa2 = Turtle()
stativa2.shape("circle")
stativa2.color("green")
stativa2.pu()
stativa2.shapesize(0.40,0.40)
stativa2.goto(270,0)         #druga stativa

branic = Turtle()
branic.shape("square")
branic.color("black")
branic.pu()
branic.shapesize(0.60,0.60)
branic.goto(randint(100,250),randint(0,150))

branic2 = Turtle()
branic2.shape("square")
branic2.color("black")
branic2.up()
branic2.shapesize(0.60,0.60)
branic2.goto(randint(100,250),randint(-50,150))

SCORE = 0

lopta.shape('circle')   
lopta.color('red')   
lopta.up()    
lopta.shapesize(0.60,0.60)  
lopta.goto(randint(-200,240),randint(0,230))

import time
active = True
while active:
    update()
    
   
    if kornjaca.distance(branic)<=15 or lopta.distance(branic)<=15:
        active = False
        kornjaca.goto(-100,-100)
        kornjaca.write("GAME OVER,score: "+str(SCORE), font=("Verdana",
                                    10, "normal"),move=True)
        break

    if kornjaca.distance(branic2)<=15 or lopta.distance(branic2)<=15:
        active = False
        kornjaca.goto(-100,-100)
        kornjaca.write("GAME OVER,score: "+str(SCORE), font=("Verdana",
                                    10, "normal"),move=True)
        break
    if kornjaca.distance(lopta)<=20:
        
        lopta.setheading(kornjaca.heading())  #setheading: usmjerava pero, heading: vraća trenutnu orijentaciju pera
        lopta.forward(40)
        x,y = lopta.position()   #position: vraća trenutu poziciju (x,y) pera
        if x > 270 and y > 0 and y < 100:   #po uvjetima kako smo postavili stative, lopta treba proći između stativa da bi se postigao pogodak
            print(choice(boje_kornjace))   
            kornjaca.color(choice(boje_kornjace))  #kornjača promijeni boju kad postigne gol
            kornjaca.goto(0,0) #položaj ispisa teksta "GOAL"
            kornjaca.write("GOAL", font=("Verdana",
                                    20, "normal"),move=True)
            kornjaca.goto(-200,-220)   #položaj teksta sa score-om
            SCORE += 1
            kornjaca.write("GOALS: "+str(SCORE), font=("Verdana",
                                    10, "normal"),move=True)
            lopta.goto(randint(-200,240),randint(0,230))
            branic2.goto(randint(100,250),randint(-50,150))
            branic.goto(randint(100,250),randint(0,150))
            kornjaca.goto(0,0)
            time.sleep(1)
            kornjaca.clear()

    
    if SCORE == 10:
        active=False
        kornjaca.goto(-100,-100)
        kornjaca.write("BRAVO! ZABIO SI 10 GOLOVA", font=("Verdana",
                                    10, "normal"),move=True)
            
            

