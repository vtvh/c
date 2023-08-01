// Convert string to ASCII numbers

#include<stdio.h>
#include<stdlib.h>

int main(){
  char arr[5];

  printf("Enter string: ");
  scanf("%s", arr);

  printf("\nThe string is: %s \n\n",arr);
  for(int i=0;i<5;i++)
    printf("\t%d",arr[i]);


  return 0;
}
