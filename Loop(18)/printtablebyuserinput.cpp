#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=n;i<=10*n;i+=n){
        cout<<i<<endl;
    }
}