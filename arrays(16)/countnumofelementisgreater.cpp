#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"enter n :";
    cin>>n;
    int arr[8]={1,2,35,7,876,87,9,8};
    for(int i=0;i<=7;i++){
        if(n<arr[i]) count++;
    }
    cout<<count;
}