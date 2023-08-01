#include<stdio.h>
#include<stdlib.h>

int main(){
  int n, sum=0;

  printf("Input n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    sum+=i*i;
  }

  printf("Tong binh phuong cac so tu 1 den %d la: %d\n",n,sum);

  return 0;
}
