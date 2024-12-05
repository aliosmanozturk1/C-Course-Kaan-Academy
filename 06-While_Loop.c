#include <stdio.h>
#include <stdlib.h>



int main() {
    
    // While (iken)
    
    
    // 0 --> False
    // 0'ın haricindekiler --> True
    
    
    // while döngüsü parantez () 'in içerisi true olduğu sürece devam eder (tekrarlanır).
    
    while (0) {
        printf("While Döngüsü Başladı... \n");
    }
    
    /*
    
    int deger = 0;
    
    while (deger == 0) {                            // Parantezin içi true olduğundan döngü başlamaz.
        printf("While Döngüsü Başladı... \n");      // deger hep 0'a eşit olduğundan döngü biter sonra tekrar başlar, hiç durmaz.
    }
    
    while (deger != 0) {                           // Parantezin içi false olduğundan döngü başlamaz.
        printf("While Döngüsü Başladı... \n");
    }
    
    */
    
    
    
    int i = 0;
    
    while (i < 5) {
        printf("%d While Döngüsü Başladı... \n", i);
        i = i + 1;
    }
    
    
    
    int k = 0;
    
    while (k < 5) {
        printf("%d While Döngüsü Başlamıştır... \n", k + 1);
        k = k + 1;
    }
    
    
    
    int j = 0;
    
    while (j < 3) {
        printf("%d While Döngümüz Başlamıştır... \n", j);
        j++;
    }
    
    
    
    int a = 1;
    
    while (a < 11) {
        printf("%d'in karesi = %d \n", a, a * a);
        a++;
    }
    
    
    
    int b = 1;
    
    while (b < 10) {
        printf("1 x %d = %d \t\t", b, 1 * b);
        printf("2 x %d = %d \t\t", b, 2 * b);
        printf("3 x %d = %d \t\t", b, 3 * b);
        printf("4 x %d = %d \t\t", b, 4 * b);
        printf("5 x %d = %d \t\t", b, 5 * b);
        printf("6 x %d = %d \t\t", b, 6 * b);
        printf("7 x %d = %d \t\t", b, 7 * b);
        printf("8 x %d = %d \t\t", b, 8 * b);
        printf("9 x %d = %d \t\n", b, 9 * b);
        b++;
    }
    
    printf("\n");
    printf("%d \n", b);
    printf("Döngü bitti. \n");
    
    
    
    int sayi;
    
    printf("Lütfen kaça kadar bastırmak istediğiniz sayıyı giriniz... \n");
    scanf("%d", &sayi);
    
    while (sayi > 0) {
        printf("%d \n", sayi);
        sayi--;
    }
    
    
    
    int sayi2 = 0;
    
    printf("Lütfen kaça kadar bastırmak istediğiniz sayıyı giriniz... \n");
    scanf("%d", &sayi2);
    
    while (sayi2 > 0) {
        printf("%d \n", sayi2);
        sayi2--;
    }
    
    
    
    int benimSayim;
    int x = 1;
    
    printf("Lütfen kaça kadar bastırmak istediğiniz sayıyı giriniz... \n");
    scanf("%d", &benimSayim);
    
    while (benimSayim > 0) {
        printf("%d \n", x);
        x++;
        benimSayim--;
    }
    
    
    
    int sayim;
    int y = 1;
    int toplam;
    
    printf("Lütfen 1'den n'e kadar toplamını görmek istediğiniz sayıyı giriniz... \n");
    scanf("%d", &sayim);
    
    int kullanicininSayisi = sayim;
    
    while (sayim > 0) {
        toplam = toplam + y;
        y++;
        sayim--;
    }
    printf("1'den %d'a kadar olan sayıların toplamı: %d \n", kullanicininSayisi, toplam);
    
    
    
    return 0;
}
