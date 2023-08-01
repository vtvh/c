#include <stdio.h>

int main(){
  int a;
  float d;
  char ch, name[5];

  printf("Enter data: d f c s");
  printf("\n");
  scanf("%d %f %c %s", &a,&d,&ch,name);
  printf("\n");
  printf("Input values: %d %f %c %s",a,d,ch,name);

}
