import turtle
import random

turtle.register_shape('player1.gif')
turtle.register_shape('player2.gif')
turtle.register_shape('brick.gif')
turtle.register_shape('ball.gif')

wn=turtle.Screen()
wn.setup(1400,700)
wn.bgcolor('black')
wn.title("Brick Breaker")
wn.tracer(0)

p=turtle.Turtle()
p.speed(0)
p.pu()

#OKVIRI
def outline(x):
    o=turtle.Turtle()
    o.ht()
    o.speed(0)
    o.color('white')
    o.pu()
    o.goto(x,-300)
    o.pd()
    o.pensize(5)
    for i in range(2):
        o.fd(500)
        o.lt(90)
        o.fd(600)
        o.lt(90)

outline(-650)
outline(150)

#GRANICE
def line(x):
    l=turtle.Turtle()
    l.ht()
    l.speed(0)
    l.color('red')
    l.pu()
    l.goto(x,-250)
    l.pd()
    l.pensize(5)
    l.fd(490)

line(-645)
line(155)

#PLAYERS
class Player1():
    def __init__(self):
        self.shape="player1.gif"
        self.x=-400
        self.y=-200
        self.dx=0
        self.dy=0

    def left(self):
        self.dx=-1

    def right(self):
        self.dx=1

    def move(self):
        self.x+= self.dx

        if self.x < -620:
            self.x=-620
            self.dx=0

        elif self.x > -180:
            self.x=-180
            self.dx=0

    def distance(self,other):
        return((self.x-other.x)**2 + (self.y - other.y)**2)**0.5
    
    def render(self,p):
        p.goto(self.x,self.y)
        p.shape(self.shape)
        p.stamp()

class Player2():
    def __init__(self):
        self.shape="player2.gif"
        self.x=400
        self.y=-200
        self.dx=0
        self.dy=0

    def left(self):
        self.dx=-1

    def right(self):
        self.dx=1

    def move(self):
        self.x+= self.dx

        if self.x < 180:
            self.x=180
            self.dx=0

        elif self.x > 620:
            self.x=620
            self.dx=0

    def distance(self,other):
        return((self.x-other.x)**2 + (self.y - other.y)**2)**0.5
    
    def render(self,p):
        p.goto(self.x,self.y)
        p.shape(self.shape)
        p.stamp()

player1=Player1()
player2=Player2()

#WALLS
class Brick11():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-330
        self.y=75
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick11=Brick11()

class Brick12():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-470
        self.y=75
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick12=Brick12()

class Brick13():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-260
        self.y=105
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick13=Brick13()

class Brick14():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-400
        self.y=105
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick14=Brick14()

class Brick15():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-540
        self.y=105
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick15=Brick15()

class Brick16():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-330
        self.y=135
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick16=Brick16()

class Brick17():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-470
        self.y=135
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick17=Brick17()

class Brick18():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-260
        self.y=165
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick18=Brick18()

class Brick19():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-400
        self.y=165
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick19=Brick19()

class Brick110():
    def __init__(self):
        self.shape="brick.gif"
        self.x=-540
        self.y=165
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick110=Brick110()


class Brick21():
    def __init__(self):
        self.shape="brick.gif"
        self.x=330
        self.y=75
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick21=Brick21()

class Brick22():
    def __init__(self):
        self.shape="brick.gif"
        self.x=470
        self.y=75
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick22=Brick22()

class Brick23():
    def __init__(self):
        self.shape="brick.gif"
        self.x=260
        self.y=105
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick23=Brick23()

class Brick24():
    def __init__(self):
        self.shape="brick.gif"
        self.x=400
        self.y=105
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick24=Brick24()

class Brick25():
    def __init__(self):
        self.shape="brick.gif"
        self.x=540
        self.y=105
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick25=Brick25()

class Brick26():
    def __init__(self):
        self.shape="brick.gif"
        self.x=330
        self.y=135
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick26=Brick26()

class Brick27():
    def __init__(self):
        self.shape="brick.gif"
        self.x=470
        self.y=135
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick27=Brick27()

class Brick28():
    def __init__(self):
        self.shape="brick.gif"
        self.x=260
        self.y=165
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick28=Brick28()

class Brick29():
    def __init__(self):
        self.shape="brick.gif"
        self.x=400
        self.y=165
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick29=Brick29()

class Brick210():
    def __init__(self):
        self.shape="brick.gif"
        self.x=540
        self.y=165
    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** 0.5
    def render(self,p):
        p.shape(self.shape)
        p.goto(self.x,self.y)
        p.stamp()
brick210=Brick210()

#BALLS
class Ball1():
    def __init__(self):
        self.shape="ball.gif"
        self.x=-400
        self.y=-170
        self.dx=random.uniform(1.2,1.5)
        self.dy=random.uniform(1.2,1.5)
        
    def move(self):
        self.x+=self.dx
        self.y+=self.dy

        if self.x<-640 or self.x>-160:
            self.dx*=-1
        
        if self.y>290:
            self.dy*=-1
        
    def distance(self,other):
        return((self.x-other.x)**2 + (self.y - other.y)**2)**0.5

    def render(self,p):
        p.goto(self.x,self.y)
        p.shape(self.shape)
        p.stamp()

class Ball2():
    def __init__(self):
        self.shape="ball.gif"
        self.x=400
        self.y=-170
        self.dx=random.uniform(1.2,1.5)
        self.dy=random.uniform(1.2,1.5)
    
    def move(self):
        self.x+=self.dx
        self.y+=self.dy

        if self.x<160 or self.x>640:
            self.dx*=-1
        
        if self.y>290:
            self.dy*=-1

    def distance(self,other):
        return((self.x-other.x)**2 + (self.y - other.y)**2)**0.5

    def render(self,p):
        p.goto(self.x,self.y)
        p.shape(self.shape)
        p.stamp()

ball1=Ball1()
ball2=Ball2()

#KRETANJE
wn.listen()
wn.onkeypress(player1.left, "a")
wn.onkeypress(player1.right, "d")

wn.listen()
wn.onkeypress(player2.left, "Left")
wn.onkeypress(player2.right, "Right")

#SCORE_I_LIVES    
score1=0
lives1=2

p1=turtle.Turtle()
p1.ht()
p1.speed(0)
p1.goto(0,175)
p1.color('cyan')
p1.write('Player 1',align='center',font=('Ms Serif',30))
p1.pu()
p1.goto(0,100)
p1.pd()
p1.color('white')
p1.write('Lives:{}\nScore:{}'.format(lives1,score1),align='center',font=('MS Sans Serif',20))

score2=0
lives2=2

p2=turtle.Turtle()
p2.ht()
p2.speed(0)
p2.color('magenta')
p2.pu()
p2.goto(0,-125)
p2.pd()
p2.write('Player 2',align='center',font=('Ms Serif',30))
p2.color('white')
p2.pu()
p2.goto(0,-200)
p2.pd()
p2.write('Lives:{}\nScore:{}'.format(lives2,score2),align='center',font=('MS Sans Serif',20))

su1=score1
su2=score2
lu1=lives1
lu2=lives2

#NASLOV
def title():
    title=turtle.Turtle()
    title.ht()
    title.speed(0)
    title.pencolor('white')
    title.pu()
    title.goto(0,0)
    title.pd()
    title.write("BRICK",align='center',font=('Ms Serif',45,'bold'))
    title.pu()
    title.goto(0,-60)
    title.pd()
    title.write("BEAKER",align='center',font=('Ms Serif',45,'bold'))

title()

#GUMB_START
s=turtle.Turtle()
s.ht()
s.speed(0)
s.pencolor('white')

def start(s):
    s.pu()
    s.goto(-50,250)
    s.pd()
    s.begin_fill()
    for i in range(2):
        s.fd(100)
        s.lt(90)
        s.fd(50)
        s.lt(90)
    s.end_fill()
    s.pu()
    s.goto(0,260)
    s.write('START',align='center',font=('Ms Sans Serif',20))
    
start(s)

button='not_clicked'

def click_start(x,y):
    global button
    if -50 <= x <= 50:
        if 250 <= y <= 300:
            button='clicked'


#GUMB_EXIT
e=turtle.Turtle()
e.ht()
e.speed(0)
e.pencolor('white')

def end(e):
    e.pu()
    e.goto(-50,-300)
    e.pd()
    e.begin_fill()
    for i in range(2):
        e.fd(100)
        e.lt(90)
        e.fd(50)
        e.lt(90)
    e.end_fill()
    e.pu()
    e.goto(0,-290)
    e.write('EXIT',align='center',font=('Ms Sans Serif',20))
    
end(e)

def click_end(x,y):
    if -50 <= x <= 50:
        if -300 <= y <= -250:
            wn.bye()

print('Click START to begin the game.')
print('Click EXIT to quit the game.')

while True:
    wn.update()
    p.clear()
    
    wn.onclick(click_start,1)
    wn.onclick(click_end,3)
    
    if button=='clicked':
        player1.move()
        player2.move()
        ball1.move()
        ball2.move()

    brick11.render(p)
    brick12.render(p)
    brick13.render(p)
    brick14.render(p)
    brick15.render(p)
    brick16.render(p)
    brick17.render(p)
    brick18.render(p)
    brick19.render(p)
    brick110.render(p)

    brick21.render(p)
    brick22.render(p)
    brick23.render(p)
    brick24.render(p)
    brick25.render(p)
    brick26.render(p)
    brick27.render(p)
    brick28.render(p)
    brick29.render(p)
    brick210.render(p)
    
    player1.render(p)
    player2.render(p)
    ball1.render(p)
    ball2.render(p)

    if score1!=su1:
        p1.ht()
        p1.clear()
        p1.write('Lives:{}\nScore:{}'.format(lives1,score1),align='center',font=('MS Sans Serif',20))

    if score2!=su2:
        p2.ht()
        p2.clear()
        p2.write('Lives:{}\nScore:{}'.format(lives2,score2),align='center',font=('MS Sans Serif',20))
        
    if lives1!=lu1:
        p1.ht()
        p1.clear()
        p1.write('Lives:{}\nScore:{}'.format(lives1,score1),align='center',font=('MS Sans Serif',20))

    if lives2!=lu2:
        p2.ht()
        p2.clear()
        p2.write('Lives:{}\nScore:{}'.format(lives2,score2),align='center',font=('MS Sans Serif',20))

    def distance_player(m,n):
        if n.distance(m)<30:
            n.dx*=-1
            n.dy*=-1
    distance_player(player1,ball1)
    distance_player(player2,ball2)

    def distance_brick1(m,n):
        global score1
        if m.distance(n)<30:
            m.dx*=-1
            m.dy*=-1
            n.x=-10000
            n.y=-10000
            score1+=10
    distance_brick1(ball1,brick11)
    distance_brick1(ball1,brick12)
    distance_brick1(ball1,brick13)
    distance_brick1(ball1,brick14)
    distance_brick1(ball1,brick15)
    distance_brick1(ball1,brick16)
    distance_brick1(ball1,brick17)
    distance_brick1(ball1,brick18)
    distance_brick1(ball1,brick19)
    distance_brick1(ball1,brick110)

    def distance_brick2(m,n):
        global score2
        if m.distance(n)<30:
            m.dx*=-1
            m.dy*=-1
            n.x=-10000
            n.y=-10000
            score2+=10
    distance_brick2(ball2,brick21)
    distance_brick2(ball2,brick22)
    distance_brick2(ball2,brick23)
    distance_brick2(ball2,brick24)
    distance_brick2(ball2,brick25)
    distance_brick2(ball2,brick26)
    distance_brick2(ball2,brick27)
    distance_brick2(ball2,brick28)
    distance_brick2(ball2,brick29)
    distance_brick2(ball2,brick210)

    if ball1.y<-250:
        ball1.x=-400
        ball1.y=-170
        ball1.dx=1
        ball1.dy=1
        player1.x=-400
        player1.y=-200
        player1.dx=0
        player1.dy=0
        lives1-=1

    if ball2.y<-250:
        ball2.x=400
        ball2.y=-170
        ball2.dx=1
        ball2.dy=1
        player2.x=400
        player2.y=-200
        player2.dx=0
        player2.dy=0
        lives2-=1

    if lives1==0 or lives2==0 or score1==100 or score2==100:
        ball1.dx=0
        ball1.dy=0
        player1.dx=0
        player1.dy=0
        ball2.dx=0
        ball2.dy=0
        player2.dx=0
        player2.dy=0

    if score1==100 or lives2==0:
        s.goto(-400,-60)
        s.write('You won!',align='center',font=('MS Sans Serif',20))
        s.goto(400,-60)
        s.write('Game over!',align='center',font=('MS Sans Serif',20))

    if score2==100 or lives1==0:
        s.goto(-400,-60)
        s.write('Game over!',align='center',font=('MS Sans Serif',20))
        s.goto(400,-60)
        s.write('You won!',align='center',font=('MS Sans Serif',20))
        
        
        
        


























