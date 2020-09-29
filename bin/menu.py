import pygame, serial, time, sys

arduino = serial.Serial("COM3", 9600) #En X pon el numero donde esta conectado tu placa Arduino
pygame.init()

size = (800,500)

f = "utf-8"

def juego():
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()

def menu():
    print("----- MENU DE KKeyboard -----")
    print("1. Simon dice\n")
    o = input()
    op = o.encode(f)

    arduino.write(op)
    bS = arduino.read_all()
    text = bS.decode(f)
    print(text)
    o = input()
    op = o.encode(f)

    
if __name__ == "__main__":
    juego()
