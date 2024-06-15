//To check Given Number is palindrome or not


#include<iostream>
using namespace std;

int main(){
    int i,n,rev=0,l_d;
    cout<<"Enter N:";
    cin>>n;
    int original=n;

    while(n>0){
        l_d=n%10;
        rev=10*rev+l_d;
        n=n/10;
    }
        cout<<rev<<endl;;

    if(original==rev){
        cout<<"This is an Palindrome number";
    }
    else{
        cout<<"This is Not an Palindrome number";
    }

    return 0;
}