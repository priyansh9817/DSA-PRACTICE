// number star pattern
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the value of row : ";
    cin>>m;
    cout<<"Enter the value of col : ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<i<<" "<<endl;
    }
}