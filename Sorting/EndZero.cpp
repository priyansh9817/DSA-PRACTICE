#include<iostream>
#include<vector>
using namespace std;
void Endzero(vector<int>, &V){

}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    vector<int>v(n);
   for(int i=0;i<n;i++){
        cin>>v[i];
    }
    Endzero(V);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;
}