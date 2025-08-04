def find_duplicates():
    n = int(input("Enter number of elements: "))
    arr = []

    print("Enter the elements:")
    for i in range(n):
        arr.append(int(input()))

    arr.sort()
    duplicates = []

    for i in range(1, len(arr)):
        if arr[i] == arr[i - 1] and (len(duplicates) == 0 or arr[i] != duplicates[-1]):
            duplicates.append(arr[i])
    
    return duplicates

# Example usage
duplicates = find_duplicates()
print("Duplicates:", duplicates)
