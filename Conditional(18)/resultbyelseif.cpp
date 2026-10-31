#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter Mark : ";
    cin>>m;
    if(m>=81 && m<=100){
        cout<<"Very Good";
    }
    else if(m>=61 && m<=80){
        cout<<"Good";
    }
    else if(m>41 && m<=60){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}