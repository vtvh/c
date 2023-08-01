// Kiemtra thang nhap vao thuoc quy may

#include <stdio.h>

int main(){
  int month;
  printf("input month: ");
  scanf("%d",&month);

  if(month==1||month==2||month==3)
    printf("quy 1\n");
  else if(month==4||month==5||month==6)
    printf("quy 2\n");
  else if(month==7||month==8||month==9)
    printf("quy 3\n");
  else if(month==10||month==11||month==12)
    printf("quy 4\n");

  return 0;
}
