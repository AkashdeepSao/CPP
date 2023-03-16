#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int *arr, int n)
{   
    cout<<"Bubble Sort->";
   for(int i=1;i<n;i++)
   {
       bool swapper=false;
       for(int j=0;j<n-1;j++)
       {
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
               swapper=true;
           }
        }
        if(swapper == false)
        break;
   }
}

void SelectionSort(int *arr,int n){
    cout<<"Selection sort->";
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
        if(arr[j]<arr[minIndex])
        minIndex=j;        
        }
        swap(&arr[i],&arr[minIndex]);
    }

}
void printArray(int *arr,int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
int main(){
    int arr[100],n;
    cout<<"Enter size of Array->"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>arr[i];
    }
    bubbleSort(arr,n);    
    printArray(arr,n);
    return 0;
}