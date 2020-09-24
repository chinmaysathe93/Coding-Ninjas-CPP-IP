#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#include<map>
bool findPairs(int arr[], int n) {
	map<int,int> m;
    map<int,int>::iterator itr;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            m[arr[i]+arr[j]]++;
        }
    }
    for(itr=m.begin();itr!=m.end();itr++){
        if(itr->second>1)
            return true;
    }
    return false;
}

int main() {
	int n=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    if(findPairs(arr,n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
