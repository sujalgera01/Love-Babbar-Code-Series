#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if((n/2)%2!=0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        int x = n/2;
	        int arr1[x];
	        int arr2[x];
	        int j=0,k=0;
	        for(int i=1;i<=n;i++){
	            if(i>(n/4) && i<=(n-n/4)){
	                arr2[j++] = i;
	            }
	            else{
	                arr1[k++] = i;
	            }
	        }
	        cout<<"YES"<<endl;
	        for(int i=0;i<k;i++){
	            cout<<arr1[i]<<" ";
	        }
	        cout<<endl;
	        for(int i=0;i<j;i++){
	            cout<<arr2[i]<<" ";
	        }
	    }
	}
	return 0;
}
