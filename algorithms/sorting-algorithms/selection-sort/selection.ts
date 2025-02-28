function selection_sort(arr: number[]): void {
    for (let i = 0; i < arr.length; i++) {
        let min_idx = i

        for (let j = i + 1; j < arr.length; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        const tmp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    }
}
function print_array(arr: number[]): void {
    let string = "";
    for (let i = 0; i < arr.length; i++) {
        string += arr[i] + ' ';
    }
    console.log(string);
}

let arr = [1, 10, 6, 3, 11];
console.log("--- Array sem ordenação ---");
print_array(arr);
console.log("--- Array após ordenação ---");
selection_sort(arr);
print_array(arr);


