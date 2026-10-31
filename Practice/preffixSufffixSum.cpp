#include<iostream>
#include<vector>

using namespace std;

bool checkpreffixsum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int preffix_sum=0;
    for(int i=0;i<v.size();i++){
        preffix_sum+=v[i];
        int suffix_sum=total_sum-preffix_sum;

        if(suffix_sum==preffix_sum){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    cout<<"Enter Elements Of Array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkpreffixsum(v);
    return 0;
}