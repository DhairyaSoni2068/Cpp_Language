#include<iostream>
using namespace std;

int main(){
    int arr[5];//declaration
    // arr[0]=2;//set
    // arr[1]=5;//set
    // arr[2]=6;//set
    // arr[3]=7;//set
    // arr[4]=9;//set
    for(int i=0;i<=4;i++){
        cin>> arr[i];
    }
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" ";
    for (int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    arr[0]=100;//changing value
    cout<<endl;
    for (int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}