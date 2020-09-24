#include <iostream>
#include <vector>
using namespace std;

void findLargestUniqueSubstring(char input[], char output[]){
    int size=0,maxstring=0,Rstart,Rend;
    while(input[++size]!='\0');
    
    for(int start=0;start<size;start++){
        vector<bool> vcount(256);
        for(int end = start ;end<size;end++){
            
            if(vcount[input[end]]==true)
                break;
            else
            {
                int lenLUS = end-start+1;
                if(lenLUS>maxstring){
                    maxstring = lenLUS;
                    Rstart = start;
                    Rend = end;
                }
                vcount[input[end]]=true;
            }
        }
        vcount[input[start]]=false;
    }
    int out=0;
    for(int in=Rstart;in<=Rend; in++)
        output[out++]=input[in];
    output[out]='\0';
}

int main() {
    char input[1000], output[1000];
    cin.getline(input, 1000);
    findLargestUniqueSubstring(input, output);
    cout << output << endl;
}
