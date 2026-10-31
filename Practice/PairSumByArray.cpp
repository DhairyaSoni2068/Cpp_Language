#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int targetsum,pairs=0;
    cout<<"Enter Target Sum : ";
    cin>>targetsum;
    for(int i=0;i<6;i++){
       for(int j=i+1;j<6;j++){
            if((arr[i]+arr[j])==targetsum){
                pairs++;
            }
        } 
    }
    cout<<pairs;
    return 0;
}