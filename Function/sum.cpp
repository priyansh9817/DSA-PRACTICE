#include<iostream>
using namespace std ;
int sum(int a ,int b){
    return a+b;
}
int main(){
    int a;
    cout<<"Enter the value of a ";
    cin>>a;
    int b;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<sum(a,b);
}