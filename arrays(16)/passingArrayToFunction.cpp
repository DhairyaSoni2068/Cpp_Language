#include<iostream>
using namespace std;

int change(int arr[]){//even after changing here like brr[] or x[]
    arr[0]=4;
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    change(arr);//array is pass by reference
    cout<<endl;
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }

}