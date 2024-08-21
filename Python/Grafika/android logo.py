from turtle import*
title='Android logo'

bgcolor('black')
ht()
tracer(False)
speed(0)

pu()
goto(-80,80)
pd()

speed(0)
colormode(255)
pencolor(204,255,229)

def krug():
    begin_fill()
    fillcolor('white')
    circle(7)
    end_fill()

def a1():
    begin_fill()
    fillcolor(204,255,229)
    fd(150)
    lt(90)

    for i in range(238):
        lt(0.76)
        fd(1)
    end_fill()
    
    pu()
    goto(-40,120)
    pd()
    krug()

    pu()
    goto(20,120)
    pd()
    krug()

    pu()
    goto(-34,145)
    pd()
    
    pensize(4)
    rt(140)
    fd(50)

    pu()
    goto(34,145)
    pd()

    pensize(4)
    rt(80)
    fd(50)

def a2():
    begin_fill()
    fillcolor(204,255,229)
    pensize(1)

    rt(142)
    fd(100)

    for i in range(20):
        fd(1)
        lt(5)
    rt(9.5)
    fd(130)

    for i in range(20):
        fd(1)
        lt(5)
    rt(9.5)
    fd(100)
    end_fill()

def a3():
    begin_fill()
    fillcolor(204,255,229)

    for i in range(45):
        rt(4)
        fd(1)
    fd(70)

    for i in range(45):
        rt(4)
        fd(1)
    fd(70)
    end_fill()

def a4():
    begin_fill()
    fillcolor(204,255,229)
    rt(91)
    fd(30)
    rt(90)
    fd(50)

    for i in range(45):
        rt(4)
        fd(1)
    end_fill()

a1()

pu()
goto(-80,68)
pd()

a2()

pu()
goto(80,68)
pd()

a3()

pu()
goto(-124,70)
pd()

a3()

pu()
goto(-50,-50)
pd()

a4()

pu()
goto(14,-50)
pd()
lt(1.7)
a4()

mainloop()
