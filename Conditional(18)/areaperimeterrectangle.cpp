#include <iostream>
using namespace std;

int main(){
    int l,w;
    int p,a;
    cout<<"enter the length : ";
    cin>>l;
    cout<<"enter the width : ";
    cin>>w;
    a=l*w;
    p=2*(l+w);
    if(a>p){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"area is less than perimeter";
    }
}