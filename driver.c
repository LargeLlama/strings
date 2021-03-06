#include <string.h>
#include <stdio.h>
#include "mystring.h"

int main(){
	char new[10];
	char src[]= "src";
	
	//testing our version of cpy
	cpy(new,src);
	printf("=====OUR VERSION OF COPY=====\n");
	printf("original: %s\n", src);
	printf("copy: %s\n", new);
	
	//testing built-in version of cpy
	strcpy(new, src);
	printf("=====BUILT-IN VERSION OF COPY=====\n");
	printf("original: %s\n", src);
	printf("copy: %s\n", new);

	//testing our length function
	printf("\n=====OUR VERSION OF LENGTH=====\n");
	printf("length of string \"hello\": %d\n", length("hello"));
	printf("length of string \"\": %d\n", length(""));

	//testing built-in length function
	printf("=====BUILT-IN VERSION OF LENGTH=====\n");
	printf("length of string \"hello\": %ld\n", strlen("hello"));
	printf("length of string \"\": %ld\n", strlen(""));

	//testing our compare function
	printf("\n=====OUR VERSION OF COMPARE=====\n");
	printf("Comparing \"hello\" and \"ciao\": %d\n", cmp("hello", "ciao"));
	printf("Comparing \"yeet\" and \"aaaa\": %d\n", cmp("yeet", "aaaa"));
	printf("Comparing \"AAAA\" and \"BBBBBBBBBB\": %d\n", cmp("AAAA", "BBBBBBBBBB"));
	printf("Comparing \"\" and \"\": %d\n", cmp("", ""));
	
	//testing built-in compare function
	printf("=====BUILT-IN VERSION OF COMPARE=====\n");
	printf("Comparing \"hello\" and \"ciao\": %d\n", strcmp("hello", "ciao"));
	printf("Comparing \"yeet\" and \"aaaa\": %d\n", strcmp("yeet", "aaaa"));
	printf("Comparing \"AAAA\" and \"BBBBBBBBBB\": %d\n", strcmp("AAAA", "BBBBBBBBBB"));
	printf("Comparing \"\" and \"\": %d\n", strcmp("", ""));

	//tessting our version of strchr	
	printf("\n=====OUR VERSION OF STRCHR=====\n");
	printf("pointer of char 'e' in \"aaaeaa\": %p\n", chr("aaaeaa", 'e')); 
	printf("pointer of char 'a' in \"eeeeee\": %p\n", chr("eeeeee", 'a'));

	//testing built-in version of strchr
	printf("=====BUILT-IN VERSION OF STRCHR=====\n");
	printf("pointer of char 'e' in \"aaaeaa\": %p\n", strchr("aaaeaa", 'e')); 
	printf("pointer of char 'a' in \"eeeeee\": %p\n", strchr("eeeeee", 'a'));


	//declaring the strings to be used in our cat method
	char dest[20] = "dest";
	printf("\n=====OUR VERSION OF STRNCAT=====\n");
	printf("dest after strncat(\"dest\",\"src\",3) %s\n", cat(dest,"src",3));

	//testing built-in strncat
	printf("=====BUILT-IN VERSION OF STRNCAT=====\n");
	printf("dest after strncat(\"dest\",\"src\",3) %s\n", strncat(dest,"src",3));

	return 0;
}
