#include <stdio.h>

int IsSumFound(int arr[], int sum, size_t size, int store[]);

int main()
{
	int arr[] = {2,4,7,12,14};
	int store[2]={0};
	IsSumFound(arr, 21, 5, store);
	printf("%d %d\n", store[0], store[1]);

	return 0;
}

int IsSumFound(int arr[], int sum, size_t size, int store[])
{
	int i = 0;
	int j = size - 1;
	while(i < j)
	{
		if(arr[i] + arr[j] == sum)
		{
			store[0] = i;
			store[1] = j;
			return 1;
		}
		else if(arr[i] + arr[j] > sum)
		{
			--j;
		}
		else if(arr[i] + arr[j] < sum)
		{
			++i;
		}
	}
	return 0;
}
