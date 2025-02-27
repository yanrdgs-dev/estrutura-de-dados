function binary_search(arr: number[], target: number): number {
    let lo = 0;
    let hi = arr.length;

    while (lo <= hi) {
        const mid = Math.floor((hi + lo) / 2);
        const value = arr[mid];

        if (value == target) {
            return mid;
        } else if (value > target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    return -1;
}

const arr_test_1 = [1,2,3,4,5];
const arr_test_2 = [5,6,8,9,10];
const target_1 = 4;
const target_2 = 7;

console.log("---- Teste 1 ----");
console.log(binary_search(arr_test_1, target_1));

console.log("---- Teste 2 ----");
console.log(binary_search(arr_test_2, target_2));