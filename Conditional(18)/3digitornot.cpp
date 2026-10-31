#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"the number is 3 digit number";
    }
    else{
        cout<<"the number is not 3 digit number";
    }
}