#include<iostream>
using namespace std;

int ap(int n){
    int ans=0;
        ans=3*n+7;
        cout<<ans<<endl;    
return 0;
}
int setBit(int a){
    int bit,count=0;
    while(a!=0){
    bit = a&1;
    if(bit==1)
    count++;
    a = a>>1;    
    }
    return count;
}
int fibonacci(int n){
    int fib,term1=0,term2=1;
    if(n>=1)
    cout<<"0"<<endl;
    if(n>=2)
    cout<<"1"<<endl;
    for(int i=3;i<=n;i++){
        fib=term1+term2;
        cout<<fib<<endl;
        term1=term2;
        term2=fib;
    }
    
return 0;
}
int main(){
    int a,b,n;
    cin>>n;
    switch(n){
        case 1: cout<<"enter n for AP=";
                cin>>n;
                ap(n);
                break;
        case 2: cout<<"enter a and b =";
                cin>>a>>b;
                int x,y;
                x=setBit(a);
                y=setBit(b);
                cout<<"no of set bits="<<x+y;
                break;
        case 3: cout<<"enter n=";
                cin>>n;
                fibonacci(n);                
    }
       
    return 0;
}