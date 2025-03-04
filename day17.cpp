#include <iostream>
using namespace std;

int main()
{
   // std::cout<<"Hello World";
        int arr[5]={3,4,5,6,7};
        
        for(int i=0;i<5;i++){
            //int z=0;
            for(int j=i;j<5;j++){
             
                for(int z=i;z<j;z++){
                    cout<<arr[z];
                }
                cout<<endl;
           
        }
        
    }
    cout<<endl;
}
   
 