/*
ใบงานที่ 2  เครื่องคิดเลข
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/
#include <stdio.h>

void process(float *n1, float *n2, char *op) {
    switch (*op) {
        case '+':
            printf("Result: %.2f\n", *n1 + *n2);
            break;
        case '-':
            printf("Result: %.2f\n", *n1 - *n2);
            break;
        case '*':
            printf("Result: %.2f\n", *n1 * *n2);
            break;
        case '/':
            if (*n2 != 0) {
                printf("Result: %.2f\n", *n1 / *n2);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
}

int main(){
    float num1, num2;
    char operator;
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter number 2: "); 
    scanf("%f", &num2);
    process(&num1, &num2, &operator);
    return 0;
}