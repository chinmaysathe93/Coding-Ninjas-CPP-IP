#include <iostream>
using namespace std;

#include <bits/stdc++.h> 
int maximumProfit(int budget[], int n) {
    int maxs = 0;
    sort(budget,budget+n,greater<int>());
    for(int i = 0;i<n;i++){
        maxs = max(maxs,(i+1)*budget[i]);
    }
	return maxs;
}


int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
