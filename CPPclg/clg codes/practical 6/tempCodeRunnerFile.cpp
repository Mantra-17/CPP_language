#include <iostream>
using namespace std;

// Function to merge two sorted arrays into a single sorted array
int* mergeSortedArrays(int* arr1, int size1, int* arr2, int size2) {
    int* mergedArray = new int[size1 + size2];
    int i = 0, j = 0, k = 0;

    // Merge the arrays while maintaining sorted order
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1, if any
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2, if any
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }

    return mergedArray;
}

int main() {
    int size1, size2;

    // Input size and elements of the first array
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    int* arr1 = new int[size1];
    cout << "Enter " << size1 << " elements of the first sorted array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    // Input size and elements of the second array
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;
    int* arr2 = new int[size2];
    cout << "Enter " << size2 << " elements of the second sorted array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    // Merge the two sorted arrays
    int* mergedArray = mergeSortedArrays(arr1, size1, arr2, size2);

    // Output the merged sorted array
    cout << "Merged sorted array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
cout<<"Patel Mantra\n24DCS076";
    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;

    return 0;
}

