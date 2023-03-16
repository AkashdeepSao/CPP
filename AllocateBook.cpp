


//not a running code





#include<iostream>
#include<vector>
bool isPossibleSol(vector<int>& arr, int n, int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m || arr[i]>mid)
                return false;
            pageSum=arr[i];
        }
    } 
    return true;
}
int allocateBooks(vector<int>& arr, int n, int m) {
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(isPossibleSol(arr,n,m,mid)){
             ans=mid;  
            end=mid-1;
                     
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector<int> arr={10,20,30,40};
    int n,m;
    cout<<"Number of books->";
    cin>>n;
    cout<<"Number of Students->";
    cin>>m;
    int ans = allocateBooks(arr,n,m);
    cout<<"Maximum Pages Assign to a Student->"<<ans;
    return 0;
}