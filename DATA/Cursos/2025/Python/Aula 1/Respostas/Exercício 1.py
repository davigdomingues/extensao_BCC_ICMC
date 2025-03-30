#Gerador de diamantes

n = int(input("")) #Valor inicial
n = 2*n - 1 #Simplificação da sequência: N = 1 + (n-1)*2 dos números naturais ímpares

print()
for i in range (1, n+1, 2): #adequação proporcional ao valor de n dado no input inicial (parte superior ao meio do diamante)
    print(" " * ((n-i)//2) + "*" * i)
    
for i in range (n-2, 0, -2): #adequação proporcional ao valor de n dado no input inicial (parte inferior do diamante, após o meio do mesmo)
    print(" " * ((n-i)//2) + "*" * i)
