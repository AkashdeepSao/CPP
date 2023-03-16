#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    //int mid = start+(end-start)/2;
    int mid;
    while(start<end)
    {
        mid = start+(end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            start=mid +1;
        }
        //mid = start+(end-start)/2;
    }
    return mid;
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7};
    int index = binarySearch(arr,8,3);
    cout<<"Element at Index ->"<<index<<endl;
    return 0;
}