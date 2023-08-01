#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,j;

  printf("Bang cuu chuong 2>9\n");
  for ( i = 1; i < 11; i++)
  {
    for ( j = 2; j < 10; j++)
    {
      printf("%3d * %3d = %3d",j,i,i*j);
    }
    printf("\t");
  }


  return 0;
}
