#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter X : ";
    cin>>x;
    cout<<"Enter Y : ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"1st Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant";
    }
    else if(x==0 && y==0){
        cout<<"On Origin";
    }
    else if(y==0){
        cout<<"On X-axis";
    }
    else{
        cout<<"On Y-axis";
    }
}