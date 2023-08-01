#include<stdio.h>
#include<stdlib.h>

int main(){
  int i=0,j;
  int dai,rong;

  printf("Nhap chieu dai: ");
  scanf("%d", &dai);
  printf("Nhap chieu rong: ");
  scanf("%d", &rong);

  while(i<dai)
  {
    j=0; //khoi tao lai j=0 cho lan in ke tiep
    while (j++<rong)//in 1 hang 10 so i
      printf("%d",i); //printf("%s","*");
    printf("\n");//xuong dong khi in xong 1 hang
    i++; //tang i len 1 cho vong lap ke tiep


  }

  return 0;
}
