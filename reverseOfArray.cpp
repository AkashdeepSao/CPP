#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *b=*a;
    *a=temp;
}
vector<int> reverseArray(vector<int>& v){
    int s=0;
    int e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}
int main(){
    vector<int> arr={2,3,1,4,8,6,58};
    vector<int> ans=reverseArray(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}