#include<stdio.h>

int main()
{
  int x=0;
  printf("Lua chon (1-3): ");
  scanf("%d",&x);
  if(x==1)printf("\nBan chon 1");
  else if(x==2)printf("\nBan chon 2");
  else if(x==3)printf("\nBan chon 3");
  else printf("\nBan chon cai gi vay?!!");

}
