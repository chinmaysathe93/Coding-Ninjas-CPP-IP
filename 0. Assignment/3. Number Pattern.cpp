#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int n,j,k;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        
        for(j=1,k=i; k>0; k--){
            cout<<j++;
        }
        
        for(j=2*(n-i);j>0;j--){
            cout<<" ";
        }
        
        for(j=i,k=i; k>0; k--){
            cout<<j--;
        }
        cout<<endl;
    }
    
	return 0; 
} 
