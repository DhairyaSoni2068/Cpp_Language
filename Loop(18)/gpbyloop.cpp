#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     a=a*2;
    // }
    //output is 1 2 4 8 16 32. . .
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*4;
    }
    //output is 3 12 48. . .
}