#include<iostream>
using namespace std;

bool hasMajorityElement(int nums[], int n) {
    int candidate = -1;
    int count = 0;

    // Step 1: Find the candidate for majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else {
            if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
    }

    // Step 2: Verify if the candidate is indeed the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2);
}

int main() {
    int nums[5] = {1, 2, 0, 2, 9};
    if (hasMajorityElement(nums, 5)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}