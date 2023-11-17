#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int distance; // 주행거리
    int charge; // 택시 요금
 
    printf("주행거리(km)를 입력하세요: ");
    scanf("%d", &distance);
    
    distance = distance * 1000;

    if ( distance <= 1800 ) // 주행거리 1.8km 이하일 때, 기본요금 4300원 
        charge = 4300;
    else // 주행거리 1.8km 초과일 때, 추가 요금 계산
    {
        distance -= 1800; // 초과한 거리 계산
        distance /= 132; // 초과한 거리를 132m 단위로 나누어 추가 요금 계산
        charge = 4300 + (distance + 1) * 100; // (distance + 1)은 132m로 나눈 나머지를 올림하기 위함
                                              // 기본 요금에 추가 요금을 더함
    }
 
    printf("\n택시 요금은 %d원입니다.\n", charge);
 
    return 0;
}