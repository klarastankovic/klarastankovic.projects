from turtle import *
from random import *
from time import *
title('Nahrani kornjaču')
setup(width=600, height=500)
bgcolor("#FAEBD7")   #pozadinska boja
print("Dobrodošli u igricu Hungry Turtle.\n Cilj igrice je da kornjača u 40s pojede što više hrane.\nOd crvene hrane će se najbrže najesti(10 bodova), od zelene malo manje (5 bodova) i od narančaste najmanje (2 boda). Sretno!")
print("Kreni!")




#bodovi
bodovi = 0   #iniciranje varijable
bod = Turtle()    #kreiramo objekt bod      
bod.hideturtle()
bod.penup()
bod.sety(-230)  #postavlja drugu koordinatu na -230, a prva ostaje nepromijenjena
bod.setx(-280)  #postavlja prvu koordinatu na -280, a druga ostaje nepromijenjena
bod.write("Bodovi: "+str(bodovi), font=("Ariel", 15))
def broj_bodova():
    global bodovi     #dohvacamo varijablu "bodovi"
    bod.clear()
    bod.write("Bodovi: "+str(bodovi), font=("Ariel", 15))




#kornjača
kornjaca=Turtle()
kornjaca.shape('turtle')
kornjaca.shapesize(1.5,1.5)
kornjaca.up()
kornjaca.color("#FFA54F")
kornjaca.goto(0,100)
boje = ("#FFA54F","#63B8FF","#FFBBFF","#FFB5C5","#EE799F","#AEEEEE","#F08080")


def boja_kornjace():
    kornjaca.color(choice(boje))   #f-ja choice nalazi se u modulu random i sluzi za nasumicni odabir


#kretanje kornjače
def naprijed():
    kornjaca.fd(30)
def natrag():
    kornjaca.bk(30)
def lijevo():
    kornjaca.lt(45)
def desno():
    kornjaca.rt(45)



onkey(naprijed, 'Up')
onkey(natrag, 'Down')
onkey(lijevo, 'Left')
onkey(desno, 'Right')
listen()





#hrana 2 boda
hrana1=Turtle()
hrana1.shape('circle')
hrana1.color("#FF4040")
hrana1.up()
hrana1.shapesize(0.50,0.50)
hrana1.goto(randint(-290,290),randint(-240,240))

#hrana 5 bodova
hrana2=Turtle()
hrana2.shape('circle')
hrana2.color("#76EE00")
hrana2.up()
hrana2.shapesize(0.50,0.50)
hrana2.goto(randint(-290,290),randint(-240,240))

#hrana 10 bodova
hrana3=Turtle()
hrana3.shape('circle')
hrana3.color("#FF8C00")
hrana3.up()
hrana3.shapesize(0.50,0.50)
hrana3.goto(randint(-290,290),randint(-240,240))


#vrijeme
vrijeme_igre = 40
pocetno_vrijeme = time()


while True:
    update()

    #vrijeme
    proslo_vrijeme = time() - pocetno_vrijeme
    preostalo_vrijeme = vrijeme_igre - int(proslo_vrijeme)
    print(preostalo_vrijeme)
    if proslo_vrijeme > vrijeme_igre:
        print("Igra je zavrsena!\nOstvareni bodovi: ",bodovi)
        exit()

            
    #hrana 2 boda
    if kornjaca.distance(hrana1)<15:
        bodovi += 2
        broj_bodova()
        boja_kornjace()
        hrana1.goto(randint(-290,290),randint(-240,240))



    #hrana 5 bodova
    if kornjaca.distance(hrana2)<15:
        bodovi += 5
        broj_bodova()
        boja_kornjace()
        hrana2.goto(randint(-290,290),randint(-240,240))




    #hrana 10 bodova
    if kornjaca.distance(hrana3)<15:
        bodovi += 10
        broj_bodova()
        boja_kornjace()
        hrana3.goto(randint(-290,290),randint(-240,240))

