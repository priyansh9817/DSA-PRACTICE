#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>  &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        // finding min  element oin unasorted array
        // let assume min_index=i
        int min_ind = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_ind]){
                min_ind=j;
            }
        }
        // placing min element at beginning 
        if(i!=min_ind){
            swap(v[i],v[min_ind]);
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<=n-1;i++){
        cin>>v[i];
    }
    selectionsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}