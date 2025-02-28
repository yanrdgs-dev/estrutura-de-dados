def selection_sort(arr):
    n = len(arr)
    
    for i in range(n - 1):
        min_idx = i
        
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

def print_array(arr):
    for item in arr:
        print(item, end=" ")
    print()

if __name__ == '__main__':
    arr = [393, 10, 45, 1, 200]
    print("--- Array sem ordenação ---")
    print_array(arr)
    print("--- Array após ordenação ---")
    selection_sort(arr)
    print_array(arr)