#include <stdio.h>
#include <math.h>


int main() {
    
    int kullanicininSecimi;
    
    printf("Lütfen seçiminizi yapınız... \n");
    menu:
    printf("1.Toplama \n2.Çıkarma \n3.Çarpma \n4.Bölme \n5.Karekök \n6.Kuvvet \n");
    printf("Lütfen programdan çıkmak için -1 değerini giriniz! \n");
    scanf("%d", &kullanicininSecimi);
    
    if (kullanicininSecimi == -1) {
        goto cikis;
    }
    
    float sayim1, sayim2;
    
    if (kullanicininSecimi > 0 && kullanicininSecimi < 7) {
        printf("Lütfen iki tane sayı giriniz... \n");
        scanf("%f %f", &sayim1, &sayim2);
    }
     
    switch (kullanicininSecimi) {
        case 1:
            printf("Toplam: %.2f \n", sayim1 + sayim2);
            break;
            
        case 2:
            printf("Çıkarma: %.2f \n", sayim1 - sayim2);
            break;
        
        case 3:
            printf("Çarpım: %.2f \n", sayim1 * sayim2);
            break;
        
        case 4:
            printf("Bölüm: %.2f \n", sayim1 / sayim2);
            break;
            
        case 5:
            printf("Birincinin Karekökü: %.2f = %.2f \nİkincinin Karekökü: %.2f = %.2f \n", sayim1, sqrt(sayim1), sayim2, sqrt(sayim2));
            // sqrt karekök almamızı sağlar. Bu işlemi yapabilmek için <math.h> 'ı include etmek gerekiyor.
            break;
            
        case 6:
            printf("%.2f üzeri %.2f = %.2f \n", sayim1, sayim2, pow(sayim1, sayim2));
            // pow kuvvet almamızı sağlar.
            break;
            
        default:
            printf("Lütfen 1 - 6 arasında bir seçim yapınız... \n");
            break;
    }
    
    goto menu; // Yukarda yazdığımız menu kısmından programı tekrar başlatır.
    
    cikis:
    printf("Programdan çıkılıyor... \n");
    
    return 0;
}
