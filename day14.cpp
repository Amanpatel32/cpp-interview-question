#include<iostream>
using namespace std;
int main(){
    int rem,ans=0,mul=1;
    int num=7;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans;
}