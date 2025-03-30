#Jogo de advinhar o número

import random as rd

b = int(input("Maior número do intervalo do valor a ser advinhado: "))
a = int(input("Menor número do intervalo do valor a ser advinhado: "))

numero_secreto = rd.randint(a, b) #Valor aleatório de característica inclusiva (o 'a' e o 'b' também estão no intervalo)

while True:
    numero_advinhado = int(input("Digite o seul palpite: "))
    
    if (numero_advinhado < numero_secreto):
        print("Tente um número menor\n")
        
    elif (numero_advinhado == numero_secreto):
        print("Você acertou!\n")
        break
        
    else:
        print("Tente um número maior\n")
    