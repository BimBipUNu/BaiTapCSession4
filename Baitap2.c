#include<stdio.h>
int main()
{
    int n;
    printf("Nhập số nguyên n: "); scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d là số chẵn",n);
    }else 
    {
        printf("%d là số lẻ",n);
    }
}