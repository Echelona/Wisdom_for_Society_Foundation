/*
ใบงานที่ 3 เครื่องทอนเงิน
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/

#include <stdio.h>

void process(int *price, int *cash, int *change){
    if (*cash < *price) {
        printf("Not enough cash!\n");
    } else {
        *change = *cash - *price;
        printf("Change: %d\n", *change);
        printf("List of change:\n");
        int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 1};
        int count[sizeof(denominations)/sizeof(denominations[0])] = {0};
        for (size_t i=0;i<sizeof(denominations)/sizeof(denominations[0]);i++){
            count[i] = *change / denominations[i];
            //*change -= count[i] * denominations[i];
            *change %= denominations[i];
            if (count[i] != 0){
                printf("%d x %d\n", count[i], denominations[i]);
            }
        }
    }
}

int main(){
    int price, cash, change;
    printf("Enter price: ");
    scanf("%d", &price);
    printf("Enter cash: ");
    scanf("%d", &cash);
    process(&price, &cash, &change);
    return 0;
}