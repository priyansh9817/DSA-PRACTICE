#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 5;
    vector<int> arr(5,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(10);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

}