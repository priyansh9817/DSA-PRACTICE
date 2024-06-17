#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of array : ";
    cin>>n;
    int arr[n];
    int product=1;
    for(int i=1;i<n;i++){
        cout<<"Enter the value of array :";
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        product*=arr[i];
       
    }
     cout<<product;
}
