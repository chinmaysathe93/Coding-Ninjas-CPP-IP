#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[1000];
    cin.getline(str, 1000);
    reverseEachWord(str);
    cout << str;
}

void reverseEachWord(char input[]) {   
    int start,end,i=0;
    
    for(;input[i]!='\0';i++){
        
        start = i;
        
        while(!isspace(input[i])){
            ++i;
            if(input[i] =='\0')
                break;
        }           
        
        end = i-1;
        
        while(start<end){
            swap(input[start],input[end]);
            start++;
            end--;
        }
    
    }
    
}