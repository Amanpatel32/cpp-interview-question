#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size)
{

    for (int i = size - 1; i >= 0; i--)
    {

        cout << arr[i];
    }
}
int main()
{
    int arr[100], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
 ReverseArray(arr, size);
    
}