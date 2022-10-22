#include <stdio.h>
#include <string.h>

int IsRotation(const char *str1, const char *str2);
int IsRotation2(const char *s1, const char *s2);

int main()
{
	char *str1 = "12345";
	char *str2 = "45123";
	printf("%d\n",IsRotation(str1, str2));
	return 0;
}

int IsRotation(const char *str1, const char *str2)
{
	const char *end = NULL;
	char *cut = NULL;
	size_t lenA = 0;
	size_t lenB = 0;
	
	end = str1 + strlen(str1);
	cut = strchr(str1, str2[0]);
	
	while(NULL != cut)
	{
		lenA = cut - str1;
		lenB = end - cut;
		
		if(0 == strncmp(str1, str2 + lenB, lenA) && 0 == strncmp(str1 + lenA, str2, lenB))
		{
			return 1;
		}
		
		cut = strchr(cut+1, str2[0]);
	}
	return 0;
}


