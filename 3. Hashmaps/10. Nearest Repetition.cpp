#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include<map>
int minDistance(int arr[],int n){
	unordered_map<int,int> m;
    int mind =n-1;
    
    for(int i=0;i<n;i++){
        if(m.find(arr[i])!=m.end()){
            mind = min(mind,i - m[arr[i]]);
        }
        m[arr[i]]=i;
    }
    return mind;
}

int main() {
    	int n=0;
    	cin>>n;
    	int *arr = new int[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	
    	cout << minDistance(arr,n);
}


