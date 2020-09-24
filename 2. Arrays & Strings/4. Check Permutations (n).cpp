#include <iostream>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int sum=0;
    for(int i=0;input1[i]!='\0';i++){
    	sum += int(input1[i]) - int(input2[i]);
    }
    if(!sum)
    	return true;
    else
    	return false;
}

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}

