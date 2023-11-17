#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
	int x, y, z;
	float sum, average;
 
	printf("---------------------------------------\n");
	printf("   합계와 평균값을 계산하는 프로그램   ");
	printf("\n---------------------------------------\n");
 
	printf("정수를 입력하세요 : ");
	scanf("%d", &x);
	printf("정수를 입력하세요 : ");
	scanf("%d", &y);
	printf("정수를 입력하세요 : ");
	scanf("%d", &z);
 
	sum = x + y + z;
	average = (x + y + z) / 3;
	printf("합계는 %f이고 평균값은 %f입니다", sum, average);

    return 0;
}