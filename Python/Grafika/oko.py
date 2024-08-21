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
def trepavice():
    pensize(3)
    pencolor('black')
    goto(105,12)
    for i in range(2):
        pd()
        circle(15,90)
        pu()
        circle(15,-90)
        bk(5)
        lt(90)
        fd(4)
        rt(90)
    for i in range(3):
        pd()
        circle(16,90)
        pu()
        circle(16,-90)
        bk(5)
        lt(90)
        fd(4)
        rt(90)
    for i in range(3):
        pd()
        circle(17,90)
        pu()
        circle(17,-90)
        bk(6)
        lt(90)
        fd(3)
        rt(90)
    for i in range(2):
        pd()
        circle(19,90)
        pu()
        circle(19,-90)
        bk(7)
        lt(90)
        fd(2)
        rt(90)
    for i in range(3):
        pd()
        circle(20,90)
        pu()
        circle(20,-90)
        bk(8)
        lt(90)
        fd(2)
        rt(90)
    for i in range(4):
        pd()
        circle(22,90)
        pu()
        circle(22,-90)
        bk(8)
        lt(90)
        fd(0)
        rt(90)
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
    for i in range(5):
        pd()
        lt(180)
        circle(-24,90)
        pu()
        circle(-24,-90)
        lt(90)
        fd(0)
        lt(90)
        bk(8)
    for i in range(5):
        pd()
        lt(180)
        circle(-21,90)
        pu()
        circle(-21,-90)
        lt(90)
        fd(1)
        lt(90)
        bk(7)
    for i in range(4):
        pd()
        lt(180)
        circle(-19,90)
        pu()
        circle(-19,-90)
        lt(90)
        fd(2)
        lt(90)
        bk(7)
    for i in range(2):
        pd()
        lt(180)
        circle(-17,90)
        pu()
        circle(-17,-90)
        lt(90)
        fd(3)
        lt(90)
        bk(6)
    for i in range(3):
        pd()
        lt(180)
        circle(-16,90)
        pu()
        circle(-16,-90)
        lt(90)
        fd(4)
        lt(90)
        bk(5)
    home()
    
    

#donjetrepavice
#def trepavice2():

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
