#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	cout << "\n---------------------\n";
	cout << " Enter array elements \n";
	cout << "\n---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i < 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;

	do
	{
		//accept the number to be searched
		cout << "nEnter the element you want to search: ";			//Langkah no 1 Algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)										//Langkah no 2, 3, 4 Algoritma
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " Found at position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)													//Langkah no 5 Algoritma
			cout << "\n" << item << " Not found in the array\n";
		cout << "\nNumber of comparsions: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}