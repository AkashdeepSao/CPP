#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int temp=arr[5];
    for(int i=5;i>=0;i--){
        swap(arr[i-1],arr[i]);
         
    }
    for(int i=0;i<6;i++)
    cout<<arr[i]<<endl;
    return 0;
}