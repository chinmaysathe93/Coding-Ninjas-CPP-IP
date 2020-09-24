#include <bits/stdc++.h> 
using namespace std; 

int DuplicateNumber(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[abs(arr[i])]>=0){
            arr[abs(arr[i])] *= -1;
        }
        else{
            return abs(arr[i]);
        }
    }
}

int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << DuplicateNumber(input, size);
	delete [] input;

	return 0;
}