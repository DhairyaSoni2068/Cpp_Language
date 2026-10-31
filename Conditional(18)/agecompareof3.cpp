#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"enter age of ram : ";
    cin>>n1;
    cout<<"enter age of shyam : ";
    cin>>n2;
    cout<<"enter age of ajay : ";
    cin>>n3;
    if(n1<n2){
        if(n1<n3){
            cout<<"ram is youngest";
        }
        else{
            cout<<"ajay is youngest";
        }
    }
    else{
        if(n3<n2){
            cout<<"ajay is youngest";
        }
        else{
            cout<<"shyam is youngest";
        }
    }
}