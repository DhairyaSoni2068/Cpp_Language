#include<iostream>
using namespace std;

int largestidx(int arr[],int size){
    int max=-2345617;//INT_MIN
    int maxidx=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxidx=i;
        }
    }
    return maxidx;
}

int main(){
    int arr[6]={1,2,3,4,5,2};
    int maxindex=largestidx(arr,6);
    
    arr[maxindex]=-1;
    int smaxindex=largestidx(arr,6);

    cout<<arr[smaxindex];
    return 0;
}