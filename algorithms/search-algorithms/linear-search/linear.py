def linear_search(arr, target):
    for i,_ in enumerate(arr):
        if arr[i] == target:
            return i
    return -1

arr_test_1 = [5, 6, 2, 3, 4]
target_test_1 = 3

arr_test_2 = [1, 2, 4, 5, 6]
target_test_2 = 3

print("---- Teste 1 ----")
print(linear_search(arr_test_1, target_test_1))

print("---- Teste 2 ----")
print(linear_search(arr_test_2, target_test_2))