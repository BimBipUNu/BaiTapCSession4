/*Viết chương trình yêu cầu người dùng lần lượt nhập vào ngày, tháng, năm và
kiểm tra xem ngày tháng năm đã nhập có hợp lệ không và in ra màn hình.*/
#include <stdio.h>
int main()
{
    int day,month,year;
    int ansDay,ansMonth,ansYear;
    printf("Nhập ngày: "); scanf("%d",&day);
    printf("Nhập tháng: "); scanf("%d",&month);
    printf("Nhập năm: "); scanf("%d",&year);
    //Kiểm tra tính đúng của day month year
    if(1<=day && day<=31 && 1<=month && month<=12 && year <= 2024)
    {
        ansDay=ansMonth=ansYear=1;
        //Kiểm tra tháng 30 hay 31 ngày
        if(month == 4 || month == 6 || month == 9 || month == 11 && day==31)
        {
            ansDay=0;
        }
        //Kiểm tra số ngày của tháng 2
        if(year % 400 == 0 || (year % 4 == 0 && year %100 != 0))
        {
            if(day>29 && month==2)
            {
                ansDay=0;
            }
        }else
        {
            if(day>28 && month ==2)
            {
                ansDay=0;
            }
        }
    }else
    {
        ansDay=ansMonth=ansYear=0;
    }
    //Kiểm tra hợp lệ
    if( ansDay ==1 && ansMonth==1 && ansYear ==1)
    {
        printf("Ngày %d tháng %d năm %d hợp lệ",day,month,year);
    }else
    {
        printf("Ngày %d tháng %d năm %d không hợp lệ",day,month,year);
    }
}