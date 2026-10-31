#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3;
    cout<<"enter first side : ";
    cin>>s1;
    cout<<"enter second side : ";
    cin>>s2;
    cout<<"enter third side : ";
    cin>>s3;
    if(s1+s2 >s3 && s1+s3 >s2 && s2+s3 >s1){
        cout<<"it can make triangle";
    }
    else{
        cout<<"it can not make triangle";
    }
}