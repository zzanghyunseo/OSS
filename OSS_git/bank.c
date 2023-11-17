#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
    int principal, year, total;
    float rate;

    printf("원금과 예치 기간, 이율(1/100)을 입력하시오 : ");
    scanf("%d %d %f", &principal, &year, &rate);
    printf("원금이 %d원이고, 예치 기간이 %d년, 이율이 %.1fpercentage일 때, \n", principal, year, rate*100);

    total = principal * (1 + rate * year);
    printf("만기 시 총 수령액은 %d원입니다.", total);

    return 0;
}