//Viết chương trình yêu cầu người dùng nhập vào 3 số nguyên.
//Kiểm tra xem số thứ 3 có nằm trong khoảng giữa số thứ 2 và số thứ nhất không,
//sau đó in kết quả ra màn hình.
#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("Nhập số nguyên thứ 1: "); scanf("%d",&a);
    printf("Nhập số nguyên thứ 2: "); scanf("%d",&b);
    printf("Nhập số nguyên thứ 3: "); scanf("%d",&c);
    //Đổi chỗ a b nếu b nhỏ hơn a
    if (a>b)
    {
        temp= a;
        a=b;
        b=temp;
    }
    // kiểm tra có trong khoảng hay không?
    if(a<c && c<b)
    {
        printf("%d nằm trong khoảng giữa %d và %d",c,a,b);
    }else
    {
        printf("%d không nằm trong khoảng giữa %d và %d",c,a,b);
    }
}