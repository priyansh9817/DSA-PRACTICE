#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the value of row :";
    cin>>m;
    cout<<"Enter the value of column : ";
    cin>>n;
     int arr[m] [n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
     }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }cout<<endl;
        
     }
}