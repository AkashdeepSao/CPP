#include<iostream>
using namespace std;
int sqrt(int n){
    int start=0;
    int end=n;
    long long int ans=-1;
    long long int mid = start+(end-start)/2;
    while(start<=end)
    {
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if(square<n)
        {
            ans=mid;
            start=mid+1;
        }
        else
        end=mid-1;

        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int index = sqrt(15);
    cout<<"square root of 3 ->"<<index<<endl;
    return 0;
}