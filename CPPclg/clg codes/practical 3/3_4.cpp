#include <iostream>
using namespace std;
template <typename T>
class Collection {
private:
    T* arr;
    int size;
public:    
    Collection(int s) {
        size = s;
        arr = new T[size];
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }
    ~Collection() {
        delete[] arr;
    }
                    void display() {
        cout << "Elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

  void reverse(int start = 0, int end = -1) {
        if (end == -1) end = size - 1;
        if (start >= end) return;
        swap(arr[start], arr[end]);
        reverse(start + 1, end - 1);
    }
  T findMax(int index = 0) {
        if (index == size - 1) return arr[index];
        T maxRest = findMax(index + 1);
        return (arr[index] > maxRest) ? arr[index] : maxRest;
    }
};
                 int main() {
    int size;
    cout << "Enter number of elements (int): ";
    cin >> size;
    Collection<int> intCollection(size);
                   intCollection.display();
    cout << "Maximum: " << intCollection.findMax() << endl; 
     intCollection.reverse();
    cout << "Reversed: ";
    intCollection.display();
                  cout << "\nEnter number of elements (char): ";
    cin >> size;
    Collection<char> charCollection(size);
   charCollection.display();
    cout << "Maximum: " << charCollection.findMax() << endl;

    charCollection.reverse();
    cout << "Reversed: ";
    charCollection.display();
cout<<"Patel Mantra\n24DCS076";
    return 0;
}
