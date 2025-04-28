/*
ใบงานที่ 1 คำนวณเกรด
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/

#include <stdio.h>

void process(int *score){
    if (*score >=0 && *score <=100){
        if (*score > 79){
            printf("Grade: 4\n");
        } else if (*score > 69){
            printf("Grade: 3\n");
        } else if (*score > 59){
            printf("Grade: 2\n");
        } else if (*score > 49){
            printf("Grade: 1\n");
        } else {
            printf("Grade: 0\n");
        }
    } else {
        printf("Invalid score!\n");
    }
}

int main(){
    int score;
    printf("Enter your score[0-100]: ");
    scanf("%d", &score);
    process(&score);
    return 0;
}