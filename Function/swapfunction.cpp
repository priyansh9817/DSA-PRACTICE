#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    int b;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<a<<" "<<b << endl;
    swap(a,b);
    cout<<"After swaping: "<<a << " "<< b;

}