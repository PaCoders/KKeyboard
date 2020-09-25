import serial, time

arduino = serial.Serial("COM3", 9600) #En X pon el numero donde esta conectado tu placa Arduino
f = "utf-8"

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
    bString = arduino.readline()
    string = bString.decode(f) #Pasamos de bytes a string
    print(string)

    menu() #Pasamos al menu

    arduino.close()
