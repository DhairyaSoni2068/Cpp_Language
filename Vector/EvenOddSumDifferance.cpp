#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[]={2,1,2,1,2,1};
    int assume=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            assume+=arr[i];
        }
        else{
            assume-=arr[i];
        }
    }
    cout<<assume;
    return 0;
}