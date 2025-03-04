#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1;row<=5;row++){
            for(int col=0;col<=n-row;col++){
                cout<<" ";
            }
            for(int col=0;col<=2*(row-1);col++){
                cout<<"*";
            }
            cout<<endl;
    }
}