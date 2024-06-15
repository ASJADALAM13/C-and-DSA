//To check if a number is Armstrong or not
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,chck=0,tmp,org;
cout<<"Enter N:";
cin>>n;
org=n;
while(n>0){
    tmp=n%10;
    chck+=tmp*tmp*tmp;
    n=n/10;
}
if(chck==org){
    cout<<"This is an Armstrong Number";
}
else{
    cout<<"This is Not an Armstrong Number";
}
    return 0;
}


