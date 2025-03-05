#include<iostream>
using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(int matrix[3][3]) {
    // Transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row of the transposed matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            swap(matrix[i][j], matrix[i][3 - j - 1]);
        }
    }
}

int main() {
    int k,n;
    cout<<"enter number of rotation";
    cin>>k; // Number of rotations
    k = k % 4; // Normalize k to be within 0-3
    
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    // Rotate the matrix k times
    while (k--) {
        rotate(matrix);
    }

    // Print the rotated matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
