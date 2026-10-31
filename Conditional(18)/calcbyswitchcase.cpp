#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    char ch;
    cout<<"enter 1st number : ";
    cin>>n1;
    cout<<"enter 2nd number : ";
    cin>>n2;
    cout<<"enter operator : ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"invalid operator";
    }
}