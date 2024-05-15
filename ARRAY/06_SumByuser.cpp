#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of n :";
    cin>>n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of array: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;

}