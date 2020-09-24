#include<iostream>
using namespace std;
#include<vector>
bool subArrayZeroSum(int input[], int n) {
    vector<int> v(input, input + n);
    v[0]=input[0]; 
	for(int i=0;i<n;i++){
        v[i] = v[i-1] + input[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]==0)
    		return true;  
    	for(int j=i+1;j<n;j++){
    		if(v[i]==v[j])
    			return true;
    	}                  
    }
    return false;
}

int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    bool val = subArrayZeroSum(input, n);
    if(val)
    {
        cout<<"true";
    }
    else
    {
            cout<<"false";
    }
    return 0;
}

