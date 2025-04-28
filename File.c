/*
ใบงานที่ 7 บันทึกและอ่านค่าจากไฟล์
ชยุต ปรัชฌวิทยากร ลำดับที่ 7
ay.echelon@gmail.com
*/

#include <stdio.h>

void readFile(){
    FILE *fp;
    char name[100];
    fp = fopen("data.txt", "r");
    if (fp == NULL){
        printf("Cannot open file for reading!\n");
        return;
    }else {
        printf("\n---Reading data from file.---\n");
        while (fgets(name, sizeof(name), fp) != NULL ){
            printf("%s", name);
        }
    }
    fclose(fp);
}

void appendFile(){
    FILE *fp;
    int n;
    char name[100];
    fp = fopen("data.txt", "a");
    if (fp == NULL){
        printf("Cannot open file for appending!\n");
        return;
    }else {
        printf("Enter number of names to append: ");
        scanf("%d", &n);
        getchar();
            for (int i=0;i<n;++i){
                printf("Enter name[%d]: ", i+1);
                fgets(name, sizeof(name), stdin);
                fprintf(fp, "%s", name);
            }
    }
    fclose(fp);
    printf("Data appended successfully.\n");
}

void writeFile(){
    FILE *fp;
    int n;
    char name[100];
    fp = fopen("data.txt", "w");
    if (fp == NULL){
        printf("Cannot open file for writing!\n");
        return;
    }else {
        printf("Enter number of names: ");
        scanf("%d[^\n]", &n);
        getchar();
            for (int i=0;i<n;++i){
                printf("Enter name[%d]: ", i+1);
                fgets(name, sizeof(name), stdin);
                fprintf(fp, "%s", name);
            }
    }
    fclose(fp);
    printf("Data written successfully.\n");
}

int main(){
    int choice = 0;
    do {
       printf(
            "\n===== MENU =====\n"
            "[1] Write new data.\n"
            "[2] Append data.\n"
            "[3] Read data\n"
            "[0] Exit\n"
            "Enter[1-3, 0-exit]: "
        );
        scanf("%d", &choice);
        switch (choice){
            case 1:
                writeFile();
                break;
            case 2:
                appendFile();
                break;
            case 3:
                readFile();
                break;
            case 0:
                printf("Exit program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }while (choice != 0);
    return 0;
}