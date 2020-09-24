#include<iostream>
using namespace std;
#include "Solution.h"

void printPattern(int n){

	for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            int maxs = abs(i) > abs(j) ? abs(i) : abs(j);
            cout<<maxs + 1<<" ";
        }
        cout<<endl;
    }
}

int main(){
  int n;
  cin >> n;
  printPattern(n);
}


