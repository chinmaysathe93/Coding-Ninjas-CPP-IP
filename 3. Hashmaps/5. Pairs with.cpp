#include<iostream>
using namespace std;
#include<map>
void printPairs(int *input, int n, int k) {
    map<int,int> m;
    map<int,int>:: iterator itr,itr2;
    for(int i=0;i<n;i++)
		m[input[i]]++;
    if(k==0){        
        for(itr=m.begin();itr!=m.end();itr++){
            if(itr->second > 0){
                for(int i=0;i<(itr->second-1)*itr->second/2;i++)
                    cout<<itr->first<<" "<<itr->first<<endl;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
        	if(m.find(input[i]+k)!=m.end()){
                for(int j =0;j<(m[input[i]+k] * m[input[i]]);j++)
                	cout<<input[i]<<" "<<input[i]+k<<endl;
            }
            
            if(m.find(input[i]-k)!=m.end()){
                for(int j =0;j<(m[input[i]-k] * m[input[i]]);j++)
                	cout<<input[i]-k<<" "<<input[i]<<endl;
            }
            if(m.find(input[i])!=m.end())
            	m.erase(m.find(input[i]));
        }
	}
}

int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	int k;
	cin >> k;
	printPairs(input, n, k);
}
