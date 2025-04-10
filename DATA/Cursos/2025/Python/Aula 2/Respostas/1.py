def mediaPonderadaProdutos(produtos):
    soma = 0
    somaPesos = 0

    for i in produtos:
        soma += i["preco"] * i["estoque"]
        somaPesos += i["estoque"]
        
    return soma / somaPesos

def produtosMenorPreco(produtos):
    produtosBaratos = []
    
    for i in produtos:
        if i["preco"] < 300:
            produtosBaratos.append(i["nome"])
            
    return produtosBaratos

produtos = [
    {"nome": "Teclado", "preco": 120, "estoque": 50},
    {"nome": "Mouse", "preco": 80, "estoque": 20},
    {"nome": "Monitor", "preco": 900, "estoque": 10},
    {"nome": "Headset", "preco": 150, "estoque": 15},
    {"nome": "Webcam", "preco": 200, "estoque": 8},
    {"nome": "SSD 500GB", "preco": 300, "estoque": 25},
    {"nome": "Placa de Vídeo", "preco": 2500, "estoque": 5},
    {"nome": "Memória RAM", "preco": 180, "estoque": 30}
]

print(f'Média ponderada dos preços dos produtos: {mediaPonderadaProdutos(produtos):.2f}\n')
print('Lista de produtos com preços menores que 300 reais:', produtosMenorPreco(produtos))