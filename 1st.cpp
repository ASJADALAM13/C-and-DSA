//Check if a number is prime or not

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int i,n;
    bool sts=0;
    cout<<"Enter:"<<endl;
    cin>>n;

    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            sts=1;
            cout<<"This is not a prime"<<endl;
            break;
        }
    }
    if(sts==0){
        cout<<"This is a prime"<<endl;
    }
    return 0;
}