#include<iostream>
#include<string.h>
using namespace std;

void breakWords(char* S)
{
	int start=0,end=0;
    while(S[end]!='\0'){
        
        while(S[end]!=" "){end++;}
        
        size = end-start;
        if(size>=4 && size %2==0){
            
        }
        
    }
}

int main()
{
	char str[100000];
	cin.getline(str,100000);
	breakWords(str);
	cout<<str;
}
