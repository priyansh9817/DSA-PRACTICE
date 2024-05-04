#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of m:";
    cin >> m;
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= m; j++){
            if(i == 1 || i == n ||j == 1 ||j == m){
                cout<<" * ";
            }
            else{
                cout<<  "   ";
            }
        }
        cout << endl;
    }  
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Enter the value of m: ";
//     cin >> m;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (i == 1 || i == n || j == 1 || j == m) {
//                 cout << " * ";
//             }
//             else {
//                 cout << "   "; // Use spaces to maintain the rectangular shape
//             }
//         }
//         cout << endl;
//     }
// }
