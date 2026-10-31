#include<iostream>
using namespace std;

int main(){
    int a=33;
    int b=44;
    cout<<a<<" "<<b<<endl;
    // int temp=a;
    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}