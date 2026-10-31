#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,14,27,8};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){
        //if(mx<arr[i]) mx=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}