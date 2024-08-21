from turtle import *
from random import *
import turtle
import time

a=900
b=700

screen=turtle.Screen()
screen.setup(a,b)
screen.bgcolor('black')

snake=Turtle()
snake.turtlesize(1.2)
snake.shape('square')
snake.color('green')
snake.up()

snake2=Turtle()
snake2.hideturtle()   #metoda za skrivanje objekta
snake2.shape('square')
snake2.color('green')
snake2.up()

snake3=Turtle()
snake3.hideturtle()
snake3.shape('square')
snake3.color('green')
snake3.up()

snake4=Turtle()
snake4.hideturtle()
snake4.shape('square')
snake4.color('green')
snake4.up()

snake5=Turtle()
snake5.hideturtle()
snake5.shape('square')
snake5.color('green')
snake5.up()

food=Turtle()
food.shape('circle')
food.color('red')
food.up()
food.speed(0)
food.hideturtle()
food.goto(randint(-290,290),randint(-240,240))
food.showturtle()

gameover=Turtle()
gameover.up()
gameover.hideturtle()
gameover.color('red')

score=0

def desno():
    snake.rt(90)
def lijevo():
    snake.lt(90)

def end():
    clearscreen()
    gameover.goto(0,0)     #ispisujemo poruku game over na sredini zaslona
    gameover.write("GAME OVER", align="center", font=("Verdana", 75, "bold"))

speed=30
x=0
y=0
x2=0
y2=0
x3=0
y3=0
x4=0
y4=0
x5=0
y5=0

onkey(desno, "Right")
onkey(lijevo, "Left")
listen()   #fja koja "govori kornjači da sluša tipkovnicu"

while snake.xcor()<a/2 and snake.ycor()<b/2 and snake.xcor()>-a/2 and snake.ycor()>-b/2:
    #metoda xcor() vraca trenutnu x koordinatu pozicije objekta
    snake.fd(speed)
    snake2.goto(x,y)
    snake3.goto(x2,y2)
    snake4.goto(x3,y3)
    snake5.goto(x4,y4)

    if snake.distance(food)<30:
        food.goto(randint(-290,290),randint(-240,240))
        score+=1
        speed=speed+0.1
    if score>=1:
        snake2.showturtle()
    if score>=2:
        snake3.showturtle()
    if score>=3:
        snake4.showturtle()
    if score>=4:
        snake5.showturtle()

    x=snake.xcor()
    y=snake.ycor()      #na ovaju nacin omogucavamo da se dijelovi tijela zmije "prate"
    x2=snake2.xcor()
    y2=snake2.ycor()
    x3=snake3.xcor()
    y3=snake3.ycor()
    x4=snake4.xcor()
    y4=snake4.ycor()
    x5=snake5.xcor()
    y5=snake5.ycor()

    
        
    time.sleep(0.4)
    update()

end()

    

