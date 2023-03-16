#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int result1 = 1;
    int result2 = 0;
    while(n>0){
        int rem=0;
        rem = n%10;  
        result1 = result1*rem;        
        result2 = result2+rem;
        n = n/10;
    }
    cout<<"product="<<result1<<endl;
    cout<<"sum="<<result2;

}
