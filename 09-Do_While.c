#include <stdio.h>

int main() {
  
    int i = 10;
    
    while (i < 10) {
        printf("While: %d \n", i);
        i++;
    }
    
    
    
    printf("\n");
    
    

    int a = 10 ;
    
    do {                                        // Do (Yap)
        printf("Do - While: %d \n", a);         // Do'nun içerisindekini yaptı.
        a++;
    } while (a < 10);                           // Şartı sorguladı, şart sağlanmadı için tekrardan başlamadı.
    
    
    
    printf("\n");
    
    
    
    int b = 10 ;
    
    do {
        printf("Do - While: %d \n", b);
        b++;
    } while (b < 12);
    
    
    
    float sayi;
    char devam;
    float buyukSayi = 0;
    
    
    do {
        printf("Lütfen bir sayı giriniz... \n");
        scanf("%f", &sayi);
        
        if (sayi > buyukSayi) {
            buyukSayi = sayi;
            printf("Yeni büyük sayımız: %.2f \n", buyukSayi);
        }
        else {
            printf("Büyük sayı değişmedi, büyük sayı: %.2f \n", buyukSayi);
        }
        
        printf("Yeniden sayı girmek istiyorsanız E'yi tuşlayınız... \n");
        scanf(" %c", &devam);
    } while (devam == 'E' || devam == 'e');
    
    printf("Program başarıyla çalıştı ve kapatılıyor... \n");
    
    return 0;
}
