#include<iostream>
using namespace std;

void usa(){
    cout<<"you are in usa"<<endl;
}
void india(){
    cout<<"you are in India"<<endl;
    usa();
}
int main(){
    cout<<"you are in main"<<endl;
    india();//calling function "function call"
}