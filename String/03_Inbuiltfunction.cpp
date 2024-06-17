#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str ="Hello";
    // string str1 ="world";
    // string s=str+str1;// concantenation string 
    // cout<<s<<endl;
    // cout<<str.substr(1,4)<<endl;
    // // strcat(str,str1);
    // // cout<<str<<endl;
    // char ch ='w';
    // str.push_back(ch);
    // cout<<str<<endl;
    // To string (to convert numeric value t string )
    int num=432;
    string str = to_string(num);
    str += "1";
    cout<<str<<endl;
    
}