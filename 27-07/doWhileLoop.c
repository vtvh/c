#include<stdio.h>
#include<stdlib.h>

int main(){
  int num1, num2;
  num2=0;

  do
  {
    printf("\nEnter a number: ");
    scanf("%d",&num1);
    printf("Number is %d",num1);
    num2++;
  } while (num1!=0);

  printf("\nThe total numbers entered were %d",--num2);

  // Dung` de~ lam` menu dc, 

  return 0;
}
