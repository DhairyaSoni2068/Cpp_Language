#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,4,7,8};
    int n=sizeof(arr)/4;
    int sumodd=0;
    int sumeven=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    cout<<sumeven-sumodd;
}