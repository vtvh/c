// Tinh phuong trinh bac 2

#include <stdio.h>
#include<math.h>

int main(){
  float a,b,c,d;

  printf("input a: ");
  scanf("%f",&a);
  printf("input b: ");
  scanf("%f",&b);
  printf("input c: ");
  scanf("%f",&c);

  printf("input: ");
  scanf("%f", &d);

  d=b*b-4*a*c;
  if (d<0)
    printf("vo nghiem");
  else if (d==0)
    printf("double solution: %f",-b/(2*a));
  else
    printf("2 nghiem: %f, %f",(-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));


  return 0;
}
