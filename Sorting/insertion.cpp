#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> &v){
    int n = v.size();

    for(int i=1;i<n;i++){
        int current_ele =v[i];

        //find the correct position for our current element 
        int j=i-1;
        while(j>=0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        // insert current element 
        v[j+1]=current_ele;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    insertion(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;
}