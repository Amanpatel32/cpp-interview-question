#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 3, 2, 4, 9};
    
    // Bubble sort implementation
    for (int i = 0; i < 5; i++) {
        for (int j = 4; j > i; j--) {
            if (arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    
    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
