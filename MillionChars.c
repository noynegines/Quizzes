#include <stdio.h>


void MillionChars(char ch);
size_t MaxVal(size_t *arr);

static size_t arr[128] = {0};
static size_t max = 0;

int main()
{
	char x = '3';
	char y = '0';	
	char z = '5';
	
	MillionChars(x);
	MillionChars(z);
	MillionChars(z);
	MillionChars(z);
	MillionChars(z);
	MillionChars(z);
	MillionChars(z);
	MillionChars(x);
	MillionChars(x);
	MillionChars(y);
	return 0;
}

void MillionChars(char ch)
{
	if(ch == '0')
	{
		printf("%lu\n", MaxVal(arr));
	}
	
	arr[(size_t)ch] += 1; 
}

size_t MaxVal(size_t *arr)
{
	size_t i = 0;

	for(i = 0; i < 128; ++i)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	return max;
}
