#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the value of m ";
    cin>>m;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}