#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"enter the size : ";
    cin>>n;
    //input element of vector
    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    //counting zero in vector
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            zerocount++;
        }
    }

    //putting 0 in  vector
    for(int i=0;i<zerocount;i++){
        v[i]=0;
    }
    //putting 1 in  vector
    for(int i=zerocount;i<n;i++){
        v[i]=1;
    }

    //shorted vector
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}