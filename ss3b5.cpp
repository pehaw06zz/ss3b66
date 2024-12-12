
#include <stdio.h>
int main(){
	float base,height,area;
	//nhap do dai canh va chieu cao
	printf("do dai canh: ");
	scanf("%f",&base);
	printf("nhap chieu cao: ");
	scanf("%f",&height);
	//tinh dien tich tam giac
	area= 0.5 * base * height;
	//in ket qua dien tich tam giac
	printf("dien tich tam giac la: %.2f\n", area);

    return 0;
}
