#include <iostream>
#include <algorithm>
using namespace std;
int binary(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1; // return -1 when target is not found
}
int main()
{
    int n, target;
    cout << "Enter a positive integer: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    sort(arr, arr + n); // sort the array
    cout << "Enter the target element: ";
    cin >> target;
    int index = binary(arr, n, target);
    if (index == -1)
        cout << "Element not found!";
    else
        cout << "Element found at index " << index;
    return 0;
}