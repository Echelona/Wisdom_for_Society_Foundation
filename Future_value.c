/*
ใบงานที่ 5 อัตราเงินลงทุน
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/

#include <stdio.h>
#include <math.h>

void process(double *pv, double *r, double *t, double *fv){
    *fv = *pv * pow(1 + (*r/100), *t); 
}

int main(){
double pv, rate, time, fv;
printf("Enter the principle value: ");
scanf("%lf", &pv);
printf("Enter rate[per years]: ");
scanf("%lf", &rate);
printf("Enter deposit period[years]: ");
scanf("%lf", &time);
process(&pv, &rate, &time, &fv);
printf("Result\nPresent value[Bath]: %.2lf\n"
    "Investment period[years]: %.2lf\n"
    "Future value[Bath]: %.2lf\n", pv, time, fv);
    return 0;
}