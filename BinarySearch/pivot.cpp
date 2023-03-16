#include<iostream>
using namespace std;
int getpivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        start=mid+1;
        else
        end=mid;
        mid=start+(end-start)/2;

    }
    return start;    
}
int main(){
    int arr[]={5,6,7,8,3,2,1};
    int pivot=getpivot(arr,7);
    cout<<"Pivot of Array at index ->"<<pivot<<" value="<<arr[pivot]<<endl;    
    return 0;
}