#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    for(int i=0,swp=0;i<size;i++){
        if(input[i]==0)
        {
            while(input[++swp]==0);
            
            if(swp<size)
                swap(input[i],input[swp]);
            else
                break;
        }
        else
            swp++;
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
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}