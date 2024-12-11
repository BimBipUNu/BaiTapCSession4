#include<stdio.h>
int main()
{
    int n;
    printf("Nhập một số nguyên: ");scanf("%d",&n);
    if (n>0)
    {
        printf("%d là số dương",n);
    }else if(n<0)
    {
        printf("%d là số âm",n);
    }else
    {
        printf("0 không là số dương cũng không là số âm");
    }
}