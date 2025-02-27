import math

def binary_search(arr, target):
    lo = 0
    hi = len(arr) - 1
    
    while lo <= hi:
        mid = math.floor((hi + lo) / 2)
        value = arr[mid]
        
        if value == target:
            return mid
        elif value > target:
            hi = mid - 1
        else:
            lo = mid + 1
    
    return -1

test_arr_1 = [1, 2, 3, 4, 5, 6, 7, 8]
test_target_1 = 7

print("---- Teste 1 ----")
print(binary_search(test_arr_1, test_target_1))

test_arr_2 = [5, 6, 8, 9, 10]
test_target_2 = 11

print("---- Teste 2 ----")
print(binary_search(test_arr_2, test_target_2))