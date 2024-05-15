// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of n: ";
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++ ){
//         cout<<"Enter the value of array : ";
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";  
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of array: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}