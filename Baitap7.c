#include<stdio.h>
int main()
{
    int year;
    printf("Nhập năm cần kiểm tra: ");scanf("%d",&year);
    if(year % 400 == 0 || (year % 4 == 0 && year %100 != 0))
    {
        printf("%d là năm nhuận",year);
    }else
    {
        printf("%d không là năm nhuận",year);
    }
}