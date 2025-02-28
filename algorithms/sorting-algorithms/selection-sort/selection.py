def selection_sort(arr): # função para sortear, toma um array como parâmetro.
    n = len(arr) # n é o tamanho do array
    
    for i in range(n - 1): # para cada item do array,
        min_idx = i # presume-se que o item é o menor do array.
        
        for j in range(i + 1, n): # iterando denovo sobre o array,
            if arr[j] < arr[min_idx]: # se o item atual for menor que o menor item anterior,
                min_idx = j # novo menor item é o item atual
        
        arr[i], arr[min_idx] = arr[min_idx], arr[i] # swap entre os itens

def print_array(arr): # printar array
    for item in arr: # itera sobre o array
        print(item, end=" ")
    print()

if __name__ == '__main__':
    arr = [393, 10, 45, 1, 200] # inicializando o array
    print("--- Array sem ordenação ---")
    print_array(arr) # array sem ordenação
    print("--- Array após ordenação ---")
    selection_sort(arr) # ordena array
    print_array(arr) # array com ordenação