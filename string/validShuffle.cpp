#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int ct = 0;
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int l1 = str1.length()+str2.length();
    int l2 = str3.length();
    if(l2>l1){
        return false;
    }
    else{
        string str = str1+str2;
        sort(str.begin(),str.end());
        sort(str3.begin(),str3.end());
        for(int i=0;i<l2;i++){
            if(str3[i] == str[i]){
                ct++;
            }
            else{
                cout<<"False"<<endl;
                break;
            }
        }
        if(ct == l2){
            cout<<"True"<<endl;
        }
    }
}