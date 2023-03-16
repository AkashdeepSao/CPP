#include<iostream>
#include<algorithm>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0||size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    else
    return isSorted(arr+1,size-1);
}
int main()
{
    int arr[]={2,3,4,52,6,7,8};
    bool ans=isSorted(arr,7);
    if(ans)
    cout<<"Sorted";
    else
    cout<<"not Sorted";
    return 0;
}