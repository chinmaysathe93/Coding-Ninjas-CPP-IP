#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,k,j ;
    cin>>n;
    for (int i=1 ; i<=n ; i++){
        
        for(j = n-1; j>=i ;j--){
            cout<<" ";
        }
        
        for(k=i,j=i ; k>0 ; k--,j++){
            cout<<j;
        }
        
        for(k=j-2 ; k>=i ; k--){
            cout<<k;
        }
        
        cout<<endl;
    }
}
