#include <stdio.h>

int Bursa(const int arr[], size_t size, int res_index[2]);

enum INDEX
{
	BUY = 0,
	SELL = 1
};

int main()
{
	int arr[] = {6,12,3,5,1,4,9,2};
	int res[2];
	
	Bursa(arr, 8, res);
	printf("%d %d\n", res[0], res[1]);
	
	return 0;
}

int Bursa(const int arr[], size_t size, int res_index[2])
{
	int max_profit = 0;
	int profit = 0;
	size_t buy_index = 0;
	size_t sell_index = 1;
	
	while(sell_index < size)
	{
		profit = arr[sell_index] - arr[buy_index];
		if(profit > max_profit)
		{
			max_profit = profit;
			res_index[BUY] = buy_index;
			res_index[SELL] = sell_index;
		}
		else if (arr[buy_index] > arr[sell_index])
		{
			buy_index = sell_index;
		}
		
		++sell_index;
	}
	return max_profit;
}
