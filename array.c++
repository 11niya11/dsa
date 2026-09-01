#include <iostream>
using namespace std;

class Array {
private:
    int* arr;   // pointer for dynamic array
    int size;

public:
    // Constructor
    Array(int n) {
        size = n;
        arr = new int[size]; // allocate memory dynamically
    }

    // Destructor
    ~Array() {
        delete[] arr; // free memory
    }

    // Input elements
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Display elements
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Reverse array
    void reverse() {
        int start = 0, end = size - 1;
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    Array a(n);       // create object with dynamic size
    a.input();

    cout << "Original array: ";
    a.display();

    a.reverse();

    cout << "Reversed array: ";
    a.display();

    return 0;
}
