#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,14,27,8};
    int n=sizeof(arr)/4;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}