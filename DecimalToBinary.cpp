#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0;
    int bit,answer=0;
    cout<<"Decimal=";
    cin>>n;
    while(n!=0){
        bit = n&1;
        answer+= (bit*pow(10,i));
        n=n>>1;
        i++;
    }
    cout<<"answer="<<answer;
    return 0;
}