#include<iostream>
#include<climits>
using namespace std;
void Leaders(int* arr,int len)
{
    int max = arr[len-1];
    int newarr[len],j=0;
	for(int i=len-2;i>=0;i--){
	   if(max<=arr[i]){
	       max = arr[i];
	       newarr[j++]=max;
	   }
	}
	for(int i=j-1;i>=0;i--)
	    cout<<newarr[i]<<" ";
	cout<<arr[len-1]<<" ";
}
int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
