#include <bits/stdc++.h> 
using namespace std; 

int repeaterodd(int lower,int upper,int n){
    
    for(int i=lower;i<=upper;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    
    if(upper>=n*n){
        return 0 ;
    }
    repeaterodd(upper+n+1,upper + 2*n,n);
    
    for(int i=upper+1;i<=upper+n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int repeatereven(int lower,int upper,int n){
    if(lower>=n*n){
        return 0 ;
    }
    
    for(int i=lower;i<=upper;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    repeatereven(upper+n+1,upper + 2*n,n);
    
    for(int i=upper+1;i<=upper+n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() 
{ 
    int n;
    cin>>n;
    if(n%2==0)
        repeatereven(1,n,n);
    else
        repeaterodd(1,n,n);
	return 0; 
} 
