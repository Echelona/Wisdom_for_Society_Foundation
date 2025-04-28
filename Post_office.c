/*
โจทย์สอบ อัตราค่าส่งไปรษณีย์
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
*/
#include <stdio.h>

void registered(int *weight, int *price){
    if (*weight > 0 && *weight <= 2000){
        int rate[][5] = {
            {100, 250, 500, 1000, 2000},
            {18, 22, 28, 38, 58}
        };
        for (int i=0;i<5;++i){
            if (*weight <= rate[0][i]){
                *price = rate[1][i];
                break;
            }
        }
    }else {
        printf("Invalid weight.\n");
        if (*weight > 2000 && *weight > 10000){
            printf("Weight is too heavy. Please change to the regular package service.\n");
        }else if (*weight > 2000 && *weight < 10000){
            printf("Weight is too heavy. Please change to the regular or EMS package service.\n");
        }
        *price = 0;
    }
}

void regularly(int *weight, int *price){
    if (*weight > 0 && *weight <= 11){
        int rate [][11] = {
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
            {20, 35, 50, 65, 80, 95, 110, 125, 140, 155, 170},
        };
        for (int i=0;i<11;++i){
            if (*weight <= rate[0][i]){
                *price = rate[1][i];
                break;
            }
        }
    }else if (*weight > 0 && *weight > 11){
        *price = 170 + (*weight - 11) * 15;
    }else {
        printf("Invalid weight.\n");
        *price = 0;
    }
}

void ems(int *weight, int *price){
    if (*weight > 0 && *weight <= 10000) {
        int rate[][23] = {
            {20, 100, 250, 500, 1000, 1500, 2000, 
                2500, 3000, 3500, 4000, 4500, 5000, 
                5500, 6000, 6500, 7000, 7500, 8000, 
                8500, 9000, 9500, 10000},
            {32, 37, 42, 52, 67, 82, 97, 122, 137,
                157, 177, 197, 217, 242, 267, 292, 317,
                342, 367, 397, 427, 457, 487}
            };  
                for (int i=0;i<23;++i){
                    if (*weight <= rate[0][i]){
                        *price = rate[1][i];
                        break;
                    }
                }
    }else {
        printf("Invalid weight.\n");
        if (*weight > 10000){
            printf("Weight is too heavy.Please change to the regular package service.\n");
            *price = 0;
        }
    }
}

int main() {
    int weight = 0, price = 0, choice = 0;
    do {
        do {
            printf(
                "Choose one choice[1-3]:\n"
                "[1] EMS\n"                              // EMS (Express Mail Service)
                "[2] Send a package regularly.\n"        // ส่งแบบธรรมดา
                "[3] Send a package by registered.\n"    // ส่งแบบลงทะเบียน
                "Enter your choice: "
            );
            choice = scanf("%d", &choice) == 1 && (choice >= 1 && choice <=3)?choice:0;
            if (choice == 0){
                printf("Invalid choice.\n");
            }
        }while (choice == 0);
        do {
            if (choice == 2){
                printf("Enter the weight of the package[Kg.]: ");
            }else {
                printf("Enter the weight of the package[gm.]: ");
            }
            weight = scanf("%d", &weight) == 1 && weight > 0 ? weight : 0;
        }while (weight == 0);
        if (choice == 1){
            ems(&weight, &price);
        }else if (choice == 2){
            regularly(&weight, &price);
        }else if (choice == 3){
            registered(&weight, &price);
        }else {
            printf("Invalid choice.\n");
        }
        price > 0 ? printf("Service fee is %d Bath.\n", price) : printf("Service fee is error!\n");
    }while (price == 0);
    return 0;
}