function binary_search(arr, target) {
    var lo = 0;
    var hi = arr.length;
    while (lo <= hi) {
        var mid = Math.floor((hi + lo) / 2);
        var value = arr[mid];
        if (value == target) {
            return mid;
        }
        else if (value > target) {
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    return -1;
}
var arr_test_1 = [1, 2, 3, 4, 5];
var arr_test_2 = [5, 6, 8, 9, 10];
var target_1 = 4;
var target_2 = 7;
console.log("---- Teste 1 ----");
console.log(binary_search(arr_test_1, target_1));
console.log("---- Teste 2 ----");
console.log(binary_search(arr_test_2, target_2));
