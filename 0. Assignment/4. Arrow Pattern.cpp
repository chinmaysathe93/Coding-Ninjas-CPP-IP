#include<iostream>
using namespace std;

int starRep(int n, int counter){
    
    for(int i = 2*counter-3;i>0;i--){
        cout<<" ";
    }
    
    for(int i = counter;i>0;i--){
        cout<<"* ";
    } 
    
    cout<<endl;
    
    if(counter>n/2){
        return 0;
    }
    
    starRep(n,counter+1);
    
	for(int i = 2*counter-3 ; i>0 ; i--){
        cout<<" ";
    }
    
    for(int i = counter;i>0;i--){
        cout<<"* ";
    } 
    cout<<endl;
    
}

int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    starRep(n,1);  
}


