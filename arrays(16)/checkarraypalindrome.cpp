#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,7,8,3,2,1};
    int n=sizeof(a)/4;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bool flag=1;
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
        if(a[i]!=a[j]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"Not Palindrome";
    }
    else{
        cout<<"Palindrome";
    } 
}