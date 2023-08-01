#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("*****************************\n");
  printf("* Xin moi chon chuong trinh *\n");
  printf("*****************************\n");

  printf("\n 1.prog1");
  printf("\n 2.prog2");
  printf("\n 3.prog3");

  int prog = 0;
  printf("\n\nChon: ");
  scanf("%d",&prog);

  switch (prog)
  {
  case 1:
    printf("\n In prog1");
    break;

  case 2:
    printf("\n In prog2");
    break;

  case 3:
    printf("\n In prog3");
    break;

  default:
    printf("\n You choose nothing but crap.");
    break;
  }

  return 0;
}
