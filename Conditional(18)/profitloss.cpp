#include <iostream>
using namespace std;

int main(){
    int bp,sp;
    cout<<"enter buying price : ";
    cin>>bp;
    cout<<"enter seling price : ";
    cin>>sp;
    if(bp>sp){
        cout<<"you made loss of ";
        cout<<bp-sp;
    }
    else if(bp<sp){
        cout<<"you made profit of ";//cout<<"you made profit of "<<sp-bp;
        cout<<sp-bp;
    }
    else{
        cout<<"no profit no loss";
    }
}