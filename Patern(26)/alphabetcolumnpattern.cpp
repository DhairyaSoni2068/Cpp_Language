#include<iostream>
using namespace std;

int main(){
    int n;
    char a=65;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a;
        }
        a++;
        cout<<endl;
    }
}