#include<iostream>
using namespace std;
int peakOfArray(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        end=mid;
        mid=start+(end-start)/2;

    }
    return mid;    
}
int main(){
    int arr[]={5,6,7,8,3,2,1};
    int peak=peakOfArray(arr,7);
    cout<<"Peak of Array at index ->"<<peak<<" value="<<arr[peak]<<endl;    
    return 0;
}