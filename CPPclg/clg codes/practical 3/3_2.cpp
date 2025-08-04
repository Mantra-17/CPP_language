#include <iostream>
using namespace std;
int recursiveSum(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + recursiveSum(arr, size - 1);
}
   int iterativeSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i)
        total += arr[i];
    return total;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
       int* arr = new int[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i)
        cin >> arr[i];


    int recSum = recursiveSum(arr, size);
    int itrSum = iterativeSum(arr, size);

   
    cout << "\nSum using Recursion: " << recSum << endl;
    cout << "Sum using Iteration: " << itrSum << endl;

    
    delete[] arr;

    cout << "Patel Mantra\n24DCS076" << endl;
    return 0;
}

    

   
    
    

    

