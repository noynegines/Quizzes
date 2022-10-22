#include <stdio.h>
#include <assert.h>

int MaxSubArray(int *arr, size_t size, int *range);

int main()
{
	int arr1[] = {-2, 1, -3, 4, -1, 2, 3, -5, 4};
	int try[] = {-2,0,-1,-5};
	int arr2[2] ={0};
	int res = 0;
	
	res = MaxSubArray(arr1,9,arr2);
	printf("%d %d %d\n", res, arr2[0], arr2[1]);
	
	return 0;
}

int MaxSubArray(int *arr, size_t size, int *range)
{
	int max_sum = -999;
	int sum = -999;
	size_t i = 0;
	
	assert (NULL != arr);
	
	for(i = 0; i < size; ++i)
	{
		if(sum >= 0)
		{
			sum += arr[i];		
		}
		else
		{
			range[0] = i;
			sum = arr[i];
		}
		if(sum > max_sum)
		{
			max_sum = sum;
			range[1] = i;
		}
	}
	
	return max_sum;
}
