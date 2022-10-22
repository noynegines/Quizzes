#include <stdio.h>

size_t FindSum(int arr[], size_t size);
void FindTwoMissingNumbers(int arr[], size_t N);

int main()
{
	return 0;
}

void FindTwoMissingNumbers(int arr[], size_t N)
{
	size_t sum_arr = 0;
	size_t sum_range = 0;
	size_t diff = 0;
	size_t avg = 0;
	size_t left_size = 0;
	size_t right_size = 0;
	size_t total_left_sum  = 0;
	size_t total_sum = 0;
	
	sum_range = FindSum(arr, N-2);
	sum_arr = (n * (N + 1)) / 2;
	diff = sum_arr - sum_range;
	
	avg = diff / 2;
	for(i = 0; size - 2 > i; ++i)
    {
        if (avg >= arr[i])
        {
            left_size += arr[i];
        }
        else
        {
			right_size += arr[i];
        }
    }

	total_left_sum = avg * (avg + 1) / 2 ;
	total sum = total_left_sum - left_size;
	printf("1: %lu 2: %lu", total_sum, total_sum-diff);

}

size_t FindSum(int arr[], size_t N)
{
	size_t i = 0;
	size_t sum = 0;
	
	for(i = 0; i < size; ++i)
	{
		sum+=sum + arr[i];
	}
	
	return sum;
}
  

