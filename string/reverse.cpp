#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=s.length();i>=0;i--){
        cout<<s[i];
    }
}