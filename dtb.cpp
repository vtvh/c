// Nhập vào một số gọi là điểm trung bình của 1 học sinh.
// Sau đó in ra màn hình xếp loại học tập của học sinh đó theo quy tắc sau:
// + >= 9.0 là XUẤT SẮC
// + 9 > điểm >= 8 là GIỎI
// + 8 > điểm >= 6.5 là KHÁ
// + 6.5 > điểm >= 5.0 là TRUNG BÌNH + còn lại là YẾU
// Gợi ý: Dùng các phép toán so sánh, toán tử điều kiện. Toán tử điều kiện ( ?: ):
// (condition) ? expression1 : expression2;

#include <stdio.h>

int main(){
  float dtb;
  printf("dtb: ");
  scanf("%f",&dtb);

  printf(dtb>=9?"Xuat sac":(dtb<9&&dtb>=8))

}
