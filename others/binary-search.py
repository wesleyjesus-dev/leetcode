def busca_binaria(arr, valor):
    inicio = 0
    fim = len(arr) - 1

    while inicio <= fim:
        meio = inicio + (fim - inicio) // 2
        
        if arr[meio] == valor:
            return meio
        
        elif arr[meio] < valor:
            inicio = meio + 1

        else:
            fim = meio - 1

    return -1 

print("o valor encontrado foi: " + str(busca_binaria([1,2,3,4,5,6,7,8,9,10], 10)))