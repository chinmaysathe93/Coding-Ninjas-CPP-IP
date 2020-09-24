#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,i,j,k;
    cin>>n;
    
    for(i=1;i<=n;i++){
    
        for(j=n-i;j>0;j--){
            
        	cout<<" ";
            
    	}
        for(j=i,k=i; k>0;k--){
            cout<<j++;
        }    
                
        cout<<endl;
    }
}
