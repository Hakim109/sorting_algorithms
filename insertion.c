#include <stdio.h>


void insertion_sort(int a[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		
	}
}


int main()
{
	int sorted=0;
	int i= 0, j = 0, tmp;
	int table[6] = {12, 4, 5, 2, 43, 9};

	insertion_sort(table, 6);
	
	for (j = 0; j < 6; j++)
	{
		printf(" %d ", table[j]);
	}
}
