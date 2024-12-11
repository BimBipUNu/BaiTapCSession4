//Viết chương trình yêu cầu người dùng nhập vào số tháng.
//Chương trình sẽ in ra tháng được nhập có bao nhiêu ngày,
//nếu tháng không hợp lệ thì in ra số tháng không hợp lệ.
#include<stdio.h>
int main()
{
    int month;
    printf("Nhập một tháng bất kì: ");scanf("%d",&month);
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d có 31 ngày",month);
            break;
        case 4: case 6: case 9: case 11:
            printf("d có 30 ngày",month);
            break;
        case 2:
            printf("%d có 28 hoặc 29 ngày", month);
            break;
        default:
            printf("Dữ liệu không phù hợp");

    }
}