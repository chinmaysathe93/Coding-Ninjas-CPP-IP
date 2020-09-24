#include<iostream>
#include<algorithm>
using namespace std;

int platformsNeeded(int arrival[], int departure[], int n) {
    int occupied=1,maxocc=1;
    
    sort(arrival, arrival + n); 
	sort(departure, departure + n);
	
	for(int arr=1,dep=0;arr<n && dep<n ;){
        
        if(arrival[arr]<=departure[dep]){
            occupied++;
            arr++;
        }
        else{
            occupied--;
            dep++;
        }
        maxocc = max(maxocc,occupied);
    }
    return maxocc;
}

int main()
{
	int n;
	cin>>n;
    int* arr=new int[n];
    int* dep=new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(int i=0;i<n;i++)
    {
    	cin>>dep[i];
	}
    cout<< platformsNeeded(arr, dep, n);
}
