def codificacaoLeetCode(fraseInput, leetcodeExemplo):
    fraseCodificada = ""
    
    for i in fraseInput:
        if i in leetcodeExemplo:
            fraseCodificada += str(leetcodeExemplo[i])
            
        else:
            fraseCodificada += i
            
    return fraseCodificada

leetcodeExemplo = {
    'A': 1,
    'E': 2,
    'I': 3,
    'O': 4,
    'U': 5,
    'a': 1,
    'e': 2,
    'i': 3,
    'o': 4,
    'u': 5
}

fraseInput = input("Coloque o texto a ser codificado em leetcode: ")
fraseOutput = codificacaoLeetCode(fraseInput, leetcodeExemplo)

print("Resultado:\n" + str(fraseOutput))