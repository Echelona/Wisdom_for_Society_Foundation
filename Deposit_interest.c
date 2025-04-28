/*
ใบงานที่ 4 ดอกเบี้ยเงินฝาก
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/

#include <stdio.h>
#include <math.h>

void process(double *p, double *r, double *t, double *ci){
    *ci = *p * pow(1 + (*r/100), *t); 
}

int main(){
double principal, rate, time, compound_interest;
printf("Enter the principle value: ");
scanf("%lf", &principal);
printf("Enter rate[per years]: ");
scanf("%lf", &rate);
printf("Enter deposit period[years]: ");
scanf("%lf", &time);
process(&principal, &rate, &time, &compound_interest);
printf("Result\nPrincipal: %.2lf\n"
    "Total interest: %.2lf\n"
    "Compound interest: %.2lf\n", principal, compound_interest - principal, compound_interest);
    return 0;
}