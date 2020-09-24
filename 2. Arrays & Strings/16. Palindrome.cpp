#include <iostream>
using namespace std;

int palPakdu(int start,int end,char s[],int len){
    for(int i=start; i<end; i++,end--){
        if(s[i]==s[end])
            continue;
        else
            return 0;
    }
    return 1;
}


int countPalindromeSubstrings(char s[]) {
    int len=0,result=0;
    while(s[++len]!='\0');
    
    for(int start=0;start<len-1;start++){
        for(int end = len-1 ;end>start;end--){
            result+=palPakdu(start,end,s,end-start+1);
        }
    }
    return result+len;
}


int main() {
    char input[10000];
    cin >> input;
    cout << countPalindromeSubstrings(input) << endl;
}
