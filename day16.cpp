#include <iostream>
using namespace std;

int main() {
    int arr[5] = {9, 3, 2, 4, 5};
    
    // insertion sort implementation

for(int j=1;j<5;j++){

for(int i=j;i>0;i--){
    if(arr[i-1]>arr[i])
    swap(arr[i-1],arr[i]);
}}
for(int i=0;i<5;i++){
    cout<<arr[i];
}
   
}
