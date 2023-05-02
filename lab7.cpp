//Joudy El Gayar 900222142
//quick sort algorithm
#include <iostream>
using namespace std;

int partition(int arr[], int l, int r)
{

	int p = arr[l];
	int i = l;
	int j = r;
	while (i < j)
	{
		do 
		{
			i++;
		} while (arr[i] <= p);
		do
		{
			j--;
		} while (arr[j] > p);
		if (i < j)
		{
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[l], arr[j]);
		return j;
}
void quicksort(int arr[], int l, int r)
{
	if (l < r)
	{
		int pivot = partition(arr, l, r);
		quicksort(arr, l, pivot);
		quicksort(arr, pivot + 1, r);
	}
}

int main()
{
	const int n = 5;
	int arr[n] = { -11,2,32,-9,11 };
	cout << "before sorting: " << endl;
	for (int p = 0; p < n; p++)
	{
		cout << arr[p] << " ";
	}
	cout << endl;
	quicksort(arr, 0, n);
	cout << "after sorting: " << endl;
	for (int p = 0; p < n; p++)
	{
		cout << arr[p] << " ";
	}
    cout<<endl;
    return 0;
}
