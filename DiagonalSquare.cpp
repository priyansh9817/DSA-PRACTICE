#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n ||j==1 || j==n ||j==i || j==n-i+1 ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;

// int main() {
//     int m;
//     cout << "Enter the value of m : ";
//     cin >> m;


//     for (int i = 1; i <= m; i++) {
//         for (int j = 1; j <= m; j++) {
//             if(i==1 || i==m ||j==1 || j==m || j==i ||j==m+1-i ) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
