#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter=";
    cin>>n;
    int answer=0;
    while(n!=0){
        int rem = n%10;
        if(answer>INT_MAX/10 || answer<INT_MIN/10){
            answer = 0;
        }
        else{
        answer = (answer*10)+rem;
        }
        n = n/10;
    }
    cout<<"reverse="<<answer;
    return 0;
}