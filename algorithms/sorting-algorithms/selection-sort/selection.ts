function selection_sort(arr: number[]): void { // função do selection sort, toma um array como parâmetro, retorna void
    for (let i = 0; i < arr.length; i++) { // busca simples pelo array,
        let min_idx = i // presumindo que o item atual seja o menor,

        for (let j = i + 1; j < arr.length; j++) { // busca simples novamente pelo array,
            if (arr[j] < arr[min_idx]) { // se o item atual (da segunda iteração) for menor que o item anterior (iteração de cima)
                min_idx = j; // novo menor item == item atual.
            }
        }

        const tmp = arr[min_idx]; // swap entre os dois itens
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    } 
}
function print_array(arr: number[]): void { // função para printar o array, toma um array como parâmetro, retorna void
    let string = ""; // cria uma string para printar os itens do array lado lado
    for (let i = 0; i < arr.length; i++) { // itera sobre o array,
        string += arr[i] + ' '; // adiciona os itens do array seguidos de ' ' ao string.
    }
    console.log(string); // printa o string
}

let arr = [1, 10, 6, 3, 11]; // inicializar array
console.log("--- Array sem ordenação ---");
print_array(arr); // array sem ordenar
console.log("--- Array após ordenação ---");
selection_sort(arr); // ordenando array
print_array(arr); // array ordenado


