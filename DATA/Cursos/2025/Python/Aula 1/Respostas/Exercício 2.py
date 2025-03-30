#Verificador de primos

n = int(input("Número: "))
verificar = True

for i in range (2, n): #Desconsideram-se os números 1 e n (divisores padrão para qualquer número inteiro)
    if (n%i == 0):
        print(str(n) + " não é primo!")
        verificar = False
        break
        
if (verificar):
    print (str(n) + " é primo!")
