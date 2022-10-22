#include <stdio.h>
#include <ctype.h>
#include <string.h>

void TF(int num);
void ReverseStringToLower(char *string);
void Swap(char *str1, char *str2);


int main()
{
	char str[] = "Hello WoRld";	
	
	TF(15);
	printf("\n\n");
	ReverseStringToLower(str);
	printf("%s\n", str);
	
	return 0;
}

void TF(int num)
{
	int i = 0;
	
	for(i = 1; i <= num; ++i)
	{
		
		if(0 == i % 15)
		{
			printf("TF");
		}
		else if(0 == i % 3)
		{
			printf("T");
		}
		else if(0 == i % 5)
		{
			printf("F");
		}
		else
		{
			printf("%d", i);	
		}
	}

}

void ReverseStringToLower(char *string)
{
	char *end = NULL;
	size_t len = strlen(string);
	
	end = string + len - 1;
	
	while(end >= string)
	{
		Swap(string, end);
		--end;
		++string;
	}

}

void Swap(char *str1, char *str2)
{
	char tmp = tolower(*str1);
	*str1 = tolower(*str2);
	*str2 = tmp;
}
