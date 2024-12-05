#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int sayi1;
    int sayi2;
    int toplam = 0;
    int buyukSayi;
    int kucukSayi;
    printf("Kaçla kaç arasındaki sayıları toplamak istiyorsunuz? \n");
    printf("Lütfen 2 tane sayı giriniz... \n");
    
    scanf("%d %d", &sayi1, &sayi2);
    
    // Matematikten bildiğimiz terim sayısı formulü         // abs (absolute) --> mutlak değer almamızı sağlar.
    int terimSayisi = abs(sayi2 - sayi1) + 1;               // Bu işlemi yapabilmek için #include <stdlib.h> yapılmalıdır.
                                                            
    if (sayi2 > sayi1) {
        
        buyukSayi = sayi2;
        kucukSayi = sayi1;
        
        while (terimSayisi > 0) {
            printf("%d \n", sayi1);
            toplam = toplam + sayi1;
            sayi1++;
            terimSayisi--;
        }
    }
    else if (sayi1 >= sayi2) {
        
        buyukSayi = sayi1;
        kucukSayi = sayi2;
        
        while (terimSayisi > 0) {
            printf("%d \n", sayi2);
            toplam = toplam + sayi2;
            sayi2++;
            terimSayisi--;
        }
    }
    
    printf("%d'den %d'a kadar olan sayıların toplamı: %d \n", kucukSayi, buyukSayi, toplam);
    
    return 0;
}
