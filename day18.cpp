#include <iostream>
using namespace std;
int main(){

    int arr[3][4]={3,4,5,6,7,8,2,11,22,33,44,55};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}