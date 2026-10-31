#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,14,7,8};
    for(int i=0;i<=4;i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }    
}