/*Viết chương trình yêu cầu người dùng nhập vào 3 số nguyên, in các số đó ra màn hình theo thứ tự từ nhỏ đến lớn.*/
#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("Nhập số nguyên thứ 1: "); scanf("%d",&a);
    printf("Nhập số nguyên thứ 2: "); scanf("%d",&b);
    printf("Nhập số nguyên thứ 3: "); scanf("%d",&c);
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d %d %d",a,b,c);
}