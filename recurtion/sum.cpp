#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    if(size==1)
    return arr[0];
    if(size==0)
    return 0;
    return arr[0]+getSum(arr+1,size-1);
}
int main(){
    int arr[]={22,45,67,47,547,57,88,9};
    int ans=getSum(arr,8);
    cout<<"sum->"<<ans;
    return 0;
}