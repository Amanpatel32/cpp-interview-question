#include <iostream>  
#include <string>  

using namespace std;  

int main() {  
    int n;  
    cin >> n;  // Read number of test cases  
    
    while (n--) {  
        string s; // Hidden word  
        string t; // Guess word  
        string m = ""; // Result string  
        
        cin >> s; // Read hidden word  
        cin >> t; // Read guess word  
        
        // Processing the guess  
        for (int i = 0; i < 5; i++) {  
            if (t[i] == s[i]) {  
                m += "G"; // Correct character  
            } else {  
                m += "B"; // Incorrect character  
            }  
        }  
        
        cout << m << endl; // Output the result for this test case  
    }  
    
    return 0;  
}