#include<iostream>
using namespace std;
int main(){
   int arr[] ={1,5,8,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
     int x;
    cout<<"Enter the value of X : ";
    cin>>x;
    bool flag = false; // false means absent 
    for(int i=0;i<n;i++){
        if (x==arr[i]){
           flag = true;
            break;
        }
       if(flag==true) cout<<x<<" is present ";
       else cout<<x<<" is not present ";
    }

}