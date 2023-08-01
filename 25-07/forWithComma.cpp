#include<stdio.h>

int main(){
  int i,j,max;
  printf("max value: ");
  scanf("%d",&max);

// i<=max
for(i=0,j=max;i<=max;i++,j--)
  printf("\n%d+%d=%d",i,j,i+j);

printf("\n******************************");
// i<=j
for(i=0,j=max;i<=j;i++,j--)
  printf("\n%d+%d=%d",i,j,i+j);
}
