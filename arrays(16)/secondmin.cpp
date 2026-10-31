#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,14,27,8};
    int n=sizeof(arr)/4;
    int mn=INT16_MAX;
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    int smn=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=mn) smn=min(smn,arr[i]);
    }
    cout<<smn;
}