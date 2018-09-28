#include <strings.h>
#include <stdio.h>

int length(char* s){
  int length =0;
  while (*s && s++){
    length++;
  }
  return length;
}

char* cpy(char* dest, char* source){
  char* original = dest;
  while (*source){
    *dest=*source;
    source++;
    dest++;
  }
  return original;
}

int main(){
  char new[10]="hi";
  char src[]= "src";
  cpy(new,src);
  printf("%s\n", new);
  printf("%d \n", length("hello"));
  return 0;
}
