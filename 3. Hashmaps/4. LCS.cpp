#include<iostream>
#include <vector>
using namespace std;

#include<unordered_map>

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
    unordered_map<int,int> um;
    unordered_map<int,int>::iterator itr;
    int counter=1,maxs=0,nextnumber;
    
    for(int i=0;i<n;i++)
        um[arr[i]]=0;
    
    for(itr=um.begin();itr!=um.end();itr++){
        nextnumber= itr->first + 1;
        while(um.find(nextnumber)!=um.end()){
            nextnumber++;
            counter++;
        }
        itr->second = counter;
        maxs = max(counter,maxs);
        counter=1;
    }
    
    vector<int> v(maxs);
    
    for(int i=0;i<n;i++){
        if(um[arr[i]]==maxs)
        {
            for(int j = 0;j<maxs;j++)
                v[j] = arr[i]++;
            break;
        }
    }
    return v;
}

int main(){
  int size;
  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  vector<int> ans = longestConsecutiveIncreasingSequence(arr,size);
  
  for (auto it = ans.cbegin(); it != ans.cend(); it++) {
	cout << *it <<endl;
  }

  delete arr;
}