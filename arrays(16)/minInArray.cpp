#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,14,27,8};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for(int i=0;i<n;i++){
        //if(mn<arr[i]) mn=arr[i];
        mn=min(mn,arr[i]);
    }
    cout<<mn;
}