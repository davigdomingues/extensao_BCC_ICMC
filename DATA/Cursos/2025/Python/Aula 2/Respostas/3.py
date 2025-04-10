def f(x):
    return pow(x,2)

numeros = input("Numeros separados por espaço (devem ser de 0 a 9): ")
entrada = [float(i) for i in numeros.split()]

y = [round(f(i)) for i in entrada]

print()
for i in y:
    print("*"*i)