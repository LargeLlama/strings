#include <stddef.h>

int length(char* s)
{
	//declare the length variable and set to 0
	int length = 0;
	//loop thru each char byte as long as it isn't null
	while (*s++){
		length++;	//increment length each time we go thru
	}

	return length;
}

char* cpy(char* dest, char* source)
{
	//set a pointer equal to the given dest
	char* original = dest;

	//loop thru source and set each char in dest to the right one in source
	while (*source){
		*dest=*source;
		source++;
		dest++;
	}

	//sets the final byte to NULL
	*dest = NULL;
	return original;
}

char * chr(char *s, char c)
{
	while(*s++)
	{
		if (*s == c)
			return s;
	}
	return NULL;
}

int cmp(char *s1, char *s2)
{	
	//declare variables that hold the UNSIGNED version of both chars
	unsigned char *p1 = (unsigned char *)s1;
	unsigned char *p2 = (unsigned char *)s2;

	//as long as there isn't a terminating null in p1, keep looking
	while(*p1)
	{
		if (!(*p2)) 				//if p2 is empty, return 1
			return 1;
		else if (*p2 > *p1)			//if p2 is greater than p1, return -1
			return -1;
		else						//otherwise return 1
			return 1;

		p1++;						//keep incrementing and going thru
		p2++;
	}

	return 0;						//if u reach this, it means it's equal
}
