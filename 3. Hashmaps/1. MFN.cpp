#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#include <map> 

int highestFrequency(int *input, int n){	 
    map <int,int> m;
    int result=0;
    
    for(int i=0;i<n;i++){
        if(m[input[i]]>0)
            m[input[i]] +=1;
        else
            m[input[i]] = 1;
    }
    
    for(map <int,int>:: iterator itr=m.begin();itr!=m.end();itr++){
        result = max(result,itr->second);
    }
    
    for(int i=0;i<n;i++){
        if(m[input[i]]==result)
            return input[i];
    }    
    return 0;
}

int main() {

	int size1,size2;

	cin>>size1;
	int *input1=new int[1+size1];	
	
	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];	
	
	for(int i=0;i<size2;i++)
		cin>>input2[i];
	
	
	intersection(input1,input2,size1,size2);

		
	return 0;
}
