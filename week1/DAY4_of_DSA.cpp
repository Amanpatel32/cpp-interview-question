#include<iostream>
#include <climits>
using namespace std;
int main(){
cout<<"enter the number of element in array"<<endl;
int n;
cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
cout<<"enter your  "<<i+1<<"  element"<<endl;
        cin>>arr[i];
        cout<<endl;
    }
    int current_sum=0;
    int maxsum=INT_MIN;
for(int val:arr){
    current_sum=current_sum+val;
    maxsum=max(current_sum,maxsum);
    if(current_sum<0){
        current_sum=0;
    }
}
cout<<maxsum<<endl;
}