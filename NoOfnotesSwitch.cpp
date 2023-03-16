#include<iostream>
using namespace std;
int main(){
    int n ,hundred=0,fifty=0,twenty=0,one=0;
    cout<<"Enter=";
    cin>>n;
    switch(1){
        case 1: hundred = n/100;
                n = n%100;
                cout<<"hundred="<<hundred<<endl;
        case 2: fifty = n/50;
                n = n%50;                
                cout<<"fifty="<<fifty<<endl;
        case 3: twenty = n/20;
                n = n%20;                
                cout<<"twenty="<<twenty<<endl;
        case 4: one = n/1;
                n = n%1;                
                cout<<"one="<<one<<endl;                         


    }
    return 0;
}