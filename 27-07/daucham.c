#include<stdio.h>
#include<stdlib.h>

#define DAU_CHAM '.'

int main(){
  char c;int count;

  for(count =0;(c=getchar())!=DAU_CHAM;)
    count++;

  printf("so ki tu: %d",count);
  return 0;
}
