from math import*
from turtle import*
title('OKO')
tracer(False)
ht()
setup(width=800,height=500)
bgcolor('navajowhite')

#bjeloočnica
def bjeloocnica(x):
    goto(-100,-5)
    seth(-45)
    pu()
    pensize(1)
    pencolor('black')
    fillcolor('white')
    pd()
    begin_fill()
    for i in range(2):
        circle(x,90)
        circle(x//17,90)
    end_fill()
    pu()
    home()

#šarenica
def sarenica():
    pd()
    m=2
    speed(0)
    dot(101,'blue')
    for i in range(360):
        color('navy')
        pd()
        rt(m)
        fd(50)
        pu()
        bk(50)
        m+=1
    pu()
    home()

#zjenica
def zjenica():
    pd()
    dot(33,'black')
    pu()
    home()

#odsjaj
def odsjaj():
    pu()
    goto(15,10)
    pd()
    dot(10,'whitesmoke')
    pu()
    home()

#karunkula
def karinkula():
    pensize(1)
    pu()
    goto(107.5,0.5)
    pencolor('black')
    fillcolor('tomato')
    pd()
    begin_fill()
    rt(90)
    fd(10)
    lt(135)
    fd(10*sqrt(2))
    lt(90)
    fd(10*sqrt(2))
    lt(135)
    fd(10)
    end_fill()
    pu()
    home()

#gornjetrepavice
def trepavice1(x,y,z,w):
    for i in range(x):
        pd()
        circle(y,90)
        pu()
        circle(y,-90)
        bk(z)
        lt(90)
        fd(w)
        rt(90)
def trepavice2(x,y,z,w):
    for i in range(x):
        pd()
        lt(180)
        circle(y,90)
        pu()
        circle(y,-90)
        lt(90)
        fd(z)
        lt(90)
        bk(w)
def trepavice():
    pensize(3)
    pencolor('black')
    goto(105,12)
    trepavice1(2,15,5,4)
    trepavice1(3,16,5,4)
    trepavice1(3,17,6,3)
    trepavice1(2,19,7,2)
    trepavice1(3,20,8,2)
    trepavice1(4,22,8,0)
    pu()
    fd(16)
    pd()
    lt(80)
    fd(23)
    pu()
    bk(23)
    rt(80)
    pd()
    lt(115)
    fd(24)
    pu()
    bk(24)
    rt(115)
    lt(90)
    fd(23)
    pu()
    bk(23)
    rt(80)
    fd(8)
    trepavice2(5,-24,0,8)
    trepavice2(5,-21,1,7)
    trepavice2(4,-19,2,7)
    trepavice2(2,-17,3,6)
    trepavice2(3,-16,4,5)
    home()

#kapak
def kapak():
    pensize(1)
    pu()
    goto(-102,8)
    seth(-45)
    color('black')
    for i in range(2):
        circle(150,90)
        pu()
        circle(150//20,90)
        pd()
    pu()
    home()

def kapak2():
    pensize(1.5)
    pu()
    goto(-100,-9)
    seth(-45)
    color('white')
    for i in range(1):
        pd()
        circle(150,90)
        pu()
        circle(150//20,90)
    pu()
    home()

#obrva
def obrva():
    pensize(1)
    pu()
    goto(-50,90)
    pencolor('black')
    fillcolor('saddlebrown')
    begin_fill()
    pd()
    fd(160)
    lt(90)
    fd(25)
    lt(90)
    fd(160)
    lt(90)
    pencolor('saddlebrown')
    fd(25)
    rt(85)
    pencolor('black')
    fd(80)
    rt(180-17)
    fd(85)
    end_fill()
    pu()
    home()

#tekst/citat
def citat():
    pen=Turtle()
    pen.shape('square')
    pen.color('black')
    s=textinput('Citat','Napišite citat o očima')
    pen.ht()
    pen.up()
    pen.pu()
    pen.goto(-100,-150)
    pen.write(s,font=('Courier',15,'italic','underline'))

#main program
kapak()

kapak2()

bjeloocnica(150)

karinkula()

trepavice()

sarenica()

zjenica()

odsjaj()

obrva()

citat()

mainloop()
