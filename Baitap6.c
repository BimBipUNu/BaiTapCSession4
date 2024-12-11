#include <stdio.h>
int main()
{
    float old, newe;
    float money =0;
    printf("Nhập chỉ số công tơ điện ở đầu tháng: "); scanf("%f", &old);
    printf("Nhập chỉ số công tơ điện ở cuối tháng: "); scanf("%f", &newe);
    float consume = newe - old;
    if (0 <= consume && consume <50)
    {
        money = 10000*consume;
    }else if(50 <= consume && consume <100)
    {
        money = 10000* 49 + 15000*(consume-49);
    }else if(100 <= consume && consume <150)
    {
        money = 10000* 49+ 15000* 50+ 20000*(consume-99);
    }else if(150 <= consume && consume <200)
    {
        money = 10000* 49+ 15000* 50+ 20000*50 + 25000*(consume -149);
    }else if(200 <= consume)
    {
        money =  10000* 49+ 15000* 50+ 20000*50 + 25000*50 +30000*(consume -199);
    }
    printf("Số điện tiêu thụ trong tháng là: %.3f kWh, tổng tiền điện là: %.3f vnd",consume,money);
}