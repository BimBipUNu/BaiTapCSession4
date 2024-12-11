#include<stdio.h>
int main()
{
    int n;
    printf("Nhập số nguyên n: ");scanf("%d",&n);
    if(n%3==0 && n%5==0)
    {
        printf("%d chia hết cho 3 và 5", n);
    }else if(n%3==0)
    {
        printf("%d chia hết cho 3",n);
    }else if(n%5==0)
    {
        printf("%d chia hết cho 5",n);
    }else
    {
        printf("%d không chia hết cho 3 hoặc 5",n);
    }
}