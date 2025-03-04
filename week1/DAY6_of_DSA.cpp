#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
    int j = 0; // pointer for non-zero elements
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums, n);

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}


