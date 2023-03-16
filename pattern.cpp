#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n=";
    cin>>n;
    int i =n;
    
    while(i)
    {
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        
        int k=0;
        while(k<n-i){
            cout<<"**";
            k++;
        }

        int l=i;
        while(l>=1){
            cout<<l;
            l--;
        }

        
        cout<<endl;
        i--;
    }
    

    return 0;
}