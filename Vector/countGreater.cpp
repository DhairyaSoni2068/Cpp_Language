#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);
    cout<<"enter element of vector : ";    
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    int x;
    cout<<"enter X : ";
    cin>>x;
    int count=0;
    
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}