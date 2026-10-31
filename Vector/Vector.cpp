#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;
    cout<<"Size : "<<v.size()<<endl;// 0
    cout<<"Capacity : "<<v.capacity()<<endl;// 0
    
    v.push_back(3);//adding number in vector
    cout<<"Size : "<<v.size()<<endl;// 1
    cout<<"Capacity : "<<v.capacity()<<endl;// 1
    
    v.pop_back();//adding number in vector
    cout<<"Size : "<<v.size()<<endl;// 2
    cout<<"Capacity : "<<v.capacity()<<endl;// 2
    
    return 0;
}