function linear_search(arr: number[], target: number): number {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

const arr_test_1 = [1,2,3,4,5];
const arr_test_2 = [5,4,6,3,2];
const target = 1;

console.log("---- Teste 1 ----");
console.log(linear_search(arr_test_1, target));
console.log("---- Teste 2 ----");
console.log(linear_search(arr_test_2, target));