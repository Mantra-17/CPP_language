#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> duplicates;           

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }   
      
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
                                
        if (arr[index] > 0) {
            
            arr[index] = -arr[index];
        } else if (arr[index] < 0) {
           
            duplicates.push_back(index + 1);
            arr[index] = 0;  
        }
        
    }

    
    
    for (int val : duplicates) {
        cout << val<<endl;
    }

    return 0;
}
