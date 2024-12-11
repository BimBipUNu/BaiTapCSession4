/*Viết chương trình yêu cầu người dùng nhập vào 3 cạnh của một tam giác,
kiểm tra xem 3 cạnh nhập vào có hợp lệ không và in ra kết quả, nếu hợp lệ thì in ra “ Là 3 cạnh tam giác”,
nếu không hợp lệ thì in ra “Không phải 3 cạnh tam giác”.*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Nhập cạnh thứ 1 của tam giác: "); scanf("%d",&a);
    printf("Nhập cạnh thứ 2 của tam giác: "); scanf("%d",&b);
    printf("Nhập cạnh thứ 3 của tam giác: "); scanf("%d",&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("%d, %d, %d là 3 cạnh của tam giác",a,b,c);
    }else
    {
        printf("%d, %d, %d không là 3 cạnh của tam giác",a,b,c);
    }
}