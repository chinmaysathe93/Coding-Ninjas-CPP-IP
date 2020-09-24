#include <bits/stdc++.h>
using namespace std;

#include <map>
void pairSum(int *input, int n) 
{
    map<int,int> m;
    map<int,int>:: iterator itr,opp;
    
    for(int i=0;i<n;i++){
        if(m[input[i]]>0)
            m[input[i]] +=1;
        else
            m[input[i]] = 1;
    }
    
    for (itr=m.begin();itr!=m.end();itr++){
        int key = itr->first;
        int value = itr->second;
        
        if(key==0){
            int count = ((value-1)*value)/2;
            for(int i=1;i<=count;i++)
                cout<<"0 0"<<endl;
        }
        
        else
        if(m.find(-1*key)!=m.end()){
            opp = m.find(-1*key);
            int oppkey = opp->first;
            int oppvalue = opp->second;
            
            for(int i =1;i<=oppvalue;i++){
                for(int j=1;j<=value;j++)
                    cout<<key<<" "<<oppkey<<endl;
            }
            m.erase(opp);
        }
        m.erase(itr);
    }
}

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	pairSum(arr, n);

	delete[] arr;

	return 0;
}