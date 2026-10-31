#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    bool flage=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flage = false;
            break;
        }
    }
    if(n==1){
        cout<<"1 is niether prime nor composite";
    }
    else if(flage==true){
        cout<<"prime";
    }
    else{
        cout<<"composite";
    }
}