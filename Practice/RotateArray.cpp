#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=4;
    k=k%n;
    int ansArray[5];
    int j=0;
    //inserting last k element in new array
    for(int i=n-k;i<n;i++){
        ansArray[j++]=arr[i];
    }
    //insertin rest of element in array
    for(int i=0;i<k;i++){
        ansArray[j++]=arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<ansArray[i]<<" ";
    }
    
    return 0;
}