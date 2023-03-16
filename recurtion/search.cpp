#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int target){
    if(size==0)
    return false;
    if(arr[0]==target)
    return true;
    else
    return linearSearch(arr+1,size-1,target);
}

bool binarySearch(int arr[],int s,int e,int target){

    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==target)
    return true;

    if(arr[mid]>target)
    return binarySearch(arr,s,mid-1,target);
    else
    return binarySearch(arr,mid+1,e,target);

}
int main(){
    int arr[]={22,45,67,88,452,874,5946,8463};
    //bool ans=linearSearch(arr,8,57);
    bool ans=binarySearch(arr,0,7,874);
    if(ans)
    cout<<"Element found";
    else
    cout<<"Element not found";
    return 0;
}