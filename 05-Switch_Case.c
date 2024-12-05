#include <stdio.h>

int main() {
    
    char islem;
    printf("Bir işlem (1,2,3,4) seçiniz... \n");
    scanf(" %c", &islem);
    
    /*
    switch (islem) {
        case '1':
            printf("Toplama işlemi... \n");
            break;
        case '2':
            printf("Çıkarma işlemi... \n");
            break;
        case '3':
            printf("Çarpma işlemi... \n");
            break;
        case '4':
            printf("Bölme işlemi... \n");
            break;
        default:
            printf("Hatalı işlem... \n");
            break;
    }
    */
    
    if (islem == '1') {
        printf("Toplama işlemi... \n");
    }
    else if (islem == '2') {
        printf("Çıkarma işlemi... \n");
    }
    else if (islem == '3') {
        printf("Çarpma işlemi... \n");
    }
    else if (islem == '4') {
        printf("Bölme işlemi... \n");
    }
    else {
        printf("Hatalı işlem... \n");
    }
    return 0;
}
