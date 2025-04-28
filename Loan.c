/*
ใบงานที่ 6 ดอกเบี้ยรายเดือน
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/

#include <stdio.h>
#include <math.h>

void process(double *lv, double *r, double *t, double *p){
    *p = (*lv * *r) / (1 - pow((1 + *r), -*t)); 
}

int main(){
double lv, rate, months, pay_m;
printf("Enter the principle value: ");
scanf("%lf", &lv);
printf("Enter rate[per years]: ");
scanf("%lf", &rate);
printf("Enter period[months]: ");
scanf("%lf", &months);
rate = rate / (12 * 100);
process(&lv, &rate, &months, &pay_m);
printf("Monthly payment[Bath]: %.2lf\n", pay_m);
    return 0;
}