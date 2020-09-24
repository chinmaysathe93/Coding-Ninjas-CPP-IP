#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
    
    int count =1;
    int size = strlen(input);
    char news[1000];
    
    for (int i=0,j=0;i<=size;i++){
        if(input[i]==input[i+1]){
            count++;
        }
        else{
            news[j] = input[i];
            if(count>1){
                news[++j] = '0' + count;
                count=1;
                }
            j++;
        }
    }
    int i=0;
    for (;news[i]!='\0';i++){
        input[i] = news[i];
    }
    input[i] = '\0';
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    stringCompression(str);
    cout << str;
}