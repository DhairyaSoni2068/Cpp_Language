#include<iostream>
using namespace std;

int print(int a,int n){
    if(a==n+1) return 0;
    cout<<a<<endl;
    print(a+1,n);
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    print(1,n);
}