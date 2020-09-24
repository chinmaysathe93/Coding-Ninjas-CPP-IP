#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    int zeros=0,ones=0,twos=n-1;
    
    while(ones<=twos){
        if(arr[ones]==0){
            swap(arr[zeros],arr[ones]);
            ones++;
            zeros++;
        }
        else{
            if(arr[ones]==2){
                swap(arr[ones], arr[twos]);
                while(arr[twos]==2)
                    twos--;
            }
            else
                ones++;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}