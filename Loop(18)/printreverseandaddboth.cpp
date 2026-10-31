#include<iostream>
using namespace std;

int main(){
    int n,oldn,d,r=0;
    cout<<"enter the number : ";
    cin>>n;
    oldn=n;
    while(n!=0){
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    cout<<r<<endl<<oldn+r;
}