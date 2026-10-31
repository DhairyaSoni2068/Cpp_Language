#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"enter first number : ";
    cin>>n1;
    cout<<"enter second number : ";
    cin>>n2;
    cout<<"enter third number : ";
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"first is greater";
    }
    else if(n2>n3 && n2>n1){
        cout<<"second is greater";
    }
    else{
        cout<<"third is greater";
    }
}