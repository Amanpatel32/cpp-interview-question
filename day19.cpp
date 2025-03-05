// Check if Number is a Sum of Powers of Three
// Medium
// Topics
// Companies
// Hint
// Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.

// An integer y is a power of three if there exists an integer x such that y == 3x.

 

// Example 1:

// Input: n = 12
// Output: true
// Explanation: 12 = 31 + 32
// Example 2:

// Input: n = 91
// Output: true
// Explanation: 91 = 30 + 32 + 34
// Example 3:

// Input: n = 21
// Output: false

#include<iostream>
using namespace std;

  
        bool checkPowersOfThree(int n) {  
            // While n is not zero, check if n is divisible by 3  
            while (n > 0) {  
                // If n is divisible by 3 with a remainder of 2, return false  
                if (n % 3 == 2) {  
                    return false;  
                }  
                
                // Divide n by 3  
                n /= 3;  
            }  
            
            return true;  
        } 
        
        int main(){
              cout<<checkPowersOfThree(91);
              cout<<checkPowersOfThree(21);
              cout<<checkPowersOfThree(12);

        }
    