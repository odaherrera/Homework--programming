operacion = ""
while not (operacion in ["suma" , "resta" , "multiplicacion" , "division"]):
 num_1= int(input("ingrese el primer numero"))
 num_2= int(input("ingrese el segundo numero"))
 operacion= input("Ingrese la operacion que desea realizar (suma, resta, multiplicacion, division)")
if operacion == "suma":
    print("suma es igual", num_1+num_2)
elif operacion == "resta" :
        print("resta es igual", num_1-num_2)
elif operacion == "multiplicacion":
         print("multiplicacion es igual", num_1*num_2)
elif operacion == "division" :
      print("division es igual", num_1/num_2)
      

      print ("no valido")