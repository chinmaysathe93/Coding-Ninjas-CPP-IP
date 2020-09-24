#include <cmath>
#include <iostream>
using namespace std;
#include<map>

int max(int arr[], int n) {
    map<int,int> m;
    map<int,int>::iterator itr;;
    int sum=0,maxs=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]==0)
            arr[i]=-1;
    }
    
    if(sum==n/2)
        return n;
    
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    
    for(int i=0;i<n;i++){
        if(m.find(arr[i])==m.end()){
            for(int j =n-1;j>i;j--){
                if(arr[j]==arr[i]){
                    m[arr[j]] = j-i;
                    break;
                }
            }
        }
    }
    
    for(itr=m.begin();itr!=m.end();itr++)
        maxs = max(maxs,itr->second);    
return maxs;
}


int main() {
    	int n=0;
    	cin>>n;
    	int *arr = new int[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	cout << max(arr,n);
}
