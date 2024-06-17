#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the value of an array  :";
        cin>>arr[i];
    }
   int mx=INT_MIN;
   int  smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
     for(int i=0;i<n;i++){
        if (smx<arr[i] && arr[i]!=mx){
            smx=arr[i];
        }
    }
     cout<<mx<<" "<<smx;
}