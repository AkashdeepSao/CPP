#include<iostream>
using namespace std;
bool isPalindrome(string name,int i,int j){
    if(i>j)
    return true;

    if(name[i]!=name[j])
    return false;
    else
    return isPalindrome(name,i+1,j-1);
}
int main()
{
    string name = "akashhsaka";
    bool ans=isPalindrome(name,0,name.length()-1);
    if(ans)
    cout<<"palindrame";
    else
    cout<<"not palindrome";
    return 0;
}