#include <stdio.h>

int CountCoupleSetBitsInByte(char x);
void Swap1(int *x, int *y);
void Swap2(int *x, int *y);
void Swap3(int *x, int *y);
int CountSetBitsInLong(long x);

int main()
{
	printf("first ques: %d\n",CountCoupleSetBitsInByte(3));
	printf("third ques: %d\n",CountSetBitsInLong(123456));
	
	return 0;
}

/************question 1**************/

int CountCoupleSetBitsInByte(char x)
{
	int count = 0;
	int mask = 3;
	
	while(0 != x)
	{
		if((x & mask) == 3)
		{
			++count;
		}
		x = x >> 1;
	}
	
	
	return count;
}

/************question 2**************/

void Swap1(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Swap2(int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

void Swap3(int *x, int *y)
{
	*x = *y - *x;
	*y = *y - *x;
	*x = *y + *x;
}

/************question 3**************/

int CountSetBitsInLong(long x)
{
	 int count = 0;
	 
	 while(0 != x)
	 {
	 	x = x & (x-1);
	 	++count;
	 }
	 
	 
	 return count;
}
