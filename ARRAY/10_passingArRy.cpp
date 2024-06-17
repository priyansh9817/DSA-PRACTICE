#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=4;
}
int main(){
    int arr[]={8,7,9,6,4};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;
}