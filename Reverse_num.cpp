//Reverse A given number
#include<iostream>
using namespace std;

int main(){
    int i,n,rev=0,lst_digit;

    cout<<"Enter N:";
    cin>>n;

    while(n>0){
        lst_digit=n%10;
        rev=10*rev+lst_digit;
        n=n/10;
    }
    cout<<rev;



    return 0;
}
