#include<iostream>
using namespace std;

int main(){
    int n,p=1;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        p*=n%10;
        n=n/10;
    }
    cout<<p;
}