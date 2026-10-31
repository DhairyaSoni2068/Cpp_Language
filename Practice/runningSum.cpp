#include<iostream>
#include<vector>

using namespace std;

void runingSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    cout<<"Enter Elements Of Array : ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runingSum(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}