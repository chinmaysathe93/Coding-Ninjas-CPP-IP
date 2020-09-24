#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int,int> mapinserter(int input[],int size){
    map<int,int> m;
    for(int i=0;i<size;i++){
        if(m[input[i]]>0)
            m[input[i]] +=1;
        else
            m[input[i]] = 1;
    }
    return m;
}

void mapcomparer(map<int,int> basemap,map<int,int> searchmap){
    map<int,int>:: iterator itr1,itr2;
    int key1,val1,key2,val2;
    
    for(itr1=basemap.begin();itr1!=basemap.end();itr1++){
            key1 = itr1->first;
            val1 = itr1->second;
            if(searchmap.find(key1)!=searchmap.end()){
                itr2 = searchmap.find(key1);
                key2 = itr2->first;
                val2 = itr2->second;
                
                val2 = min(val1,val2);
                
                for(int i=1;i<=val2;i++)
                    cout<<key1<<endl;
            }
        }
}

void intersection(int input1[], int input2[], int size1, int size2) {
    map<int,int> m1,m2;
    
    m1 = mapinserter(input1,size1);
    m2 = mapinserter(input2,size2);
    
    if(m2.size()<m1.size())
        mapcomparer(m2,m1);
    else
        mapcomparer(m1,m2);
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
