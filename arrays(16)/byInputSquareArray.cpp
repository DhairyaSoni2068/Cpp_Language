#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i*i;
        cout<<arr[i-1]<<" ";
    }
}