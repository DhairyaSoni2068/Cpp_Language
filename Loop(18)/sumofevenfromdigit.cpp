#include<iostream>
using namespace std;

int main(){
    int n,s=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        if((n%10)%2==0){
            s+=n%10;
        }
        n=n/10;
    }
    cout<<s;
}