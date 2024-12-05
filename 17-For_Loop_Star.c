#include <stdio.h>

int main() {

    int yildizSayisi, satir, sutun;
    
    printf("Lütfen bir sayı giriniz...\n");
    scanf("%d", &yildizSayisi);
    
    for (satir=1; satir<=yildizSayisi; satir++) {
        for (sutun=1; sutun<=satir; sutun++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (satir=1; satir<=yildizSayisi; satir++) {
        for (sutun=yildizSayisi-satir; sutun>=0; sutun--) {
            printf("*");
        }
        printf("\n");
    }
    
    
    
    
    
    
    return 0;
}
