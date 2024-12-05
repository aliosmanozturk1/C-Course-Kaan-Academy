#include <stdio.h>

int main() {

    int sayi1, sayi2;
    int buyukSayi;
    int kucukSayi;
    int kalanSayi;
    
    int ilkKucukSayi;
    int ilkBuyukSayi;
    
    do {
        printf("EBOB'unu bulmak istediğiniz iki pozitif tam sayıyı giriniz... \n");
        scanf("%d %d", &sayi1, &sayi2);
    } while (sayi1 <= 0 || sayi2 <= 0);
    
    if (sayi1 > sayi2) {
        buyukSayi = sayi1;
        kucukSayi = sayi2;
        ilkBuyukSayi = sayi1;
        ilkKucukSayi = sayi2;
        
    }
    else {
        buyukSayi = sayi2;
        kucukSayi = sayi1;
        ilkBuyukSayi = sayi2;
        ilkKucukSayi = sayi1;
    }
    
    kalanSayi = buyukSayi % kucukSayi;
    
    while (kalanSayi != 0) {
        
        buyukSayi = kucukSayi;
        kucukSayi = kalanSayi;
        kalanSayi = buyukSayi % kucukSayi;
    }
    
    printf("EBOB (%d,%d) = %d \n", ilkBuyukSayi, ilkKucukSayi, kucukSayi);
    
    return 0;
}
