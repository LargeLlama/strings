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
	printf("length of string \"hello\": %d\n", strlen("hello"));
	printf("length of string \"\": %d\n", strlen(""));

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

	
	printf("=====OUR VERSION OF STRCHR=====\n");
	printf("pointer of char 'e' in \"aaaeaa\": %p\n", chr("aaaeaa", 'e')); 



	printf("=====BUILT-IN VERSION OF STRCHR=====\n");
	printf("pointer of char 'e' in \"aaaeaa\": %p\n", strchr("aaaeaa", 'e')); 
	return 0;
}
