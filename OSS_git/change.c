#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
    int money;

    printf("금액을 입력하시오 : ");
    scanf("%d", &money);

    printf("50000원권 %d개, ", money / 50000);
    printf("10000원권 %d개, ", (money % 50000) / 10000);
    printf("5000원권 %d개, ", (money % 10000) / 5000);
    printf("1000원권 %d개입니다. \n", (money % 5000) / 1000);
    printf("거스름돈은 %d입니다. \n\n", money % 1000);
    
    return 0;
}