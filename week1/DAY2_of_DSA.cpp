#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {9, 6, 3, 6, 9};
    int i = 0;
    int j = 4; // Initialize j with the last index of the array
    bool isPalindrome = true;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}