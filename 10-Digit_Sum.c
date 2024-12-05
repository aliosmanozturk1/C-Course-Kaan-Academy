#include <stdio.h>

int main() {
   
    int sayi;
    int basamakSayisi = 0; 
    int sayiDegerleriToplami = 0;
    int sayininIlkHali;
    char devam = 'E';
    
    while (devam == 'E' || devam == 'e') {
        
        printf("Lütfen sayı değerlerinin toplamını öğrenmek istedğiniz sayıyı giriniz. ( TK: [0,∞) )... \n");
        scanf("%d", &sayi);
        sayininIlkHali = sayi;
        
        if (sayi >= 0) {
          
            do {
                
                sayiDegerleriToplami += sayi % 10;
                basamakSayisi++;
                
                sayi = sayi / 10;
                
            } while(sayi > 0);
            
            printf("%d sayısı %d basamaklıdır. \n", sayininIlkHali, basamakSayisi);
            printf("Sayı değerleri toplamı (Rakamları toplamı): %d \n", sayiDegerleriToplami);
            
            basamakSayisi = 0;
            sayiDegerleriToplami = 0;
            
            printf("Hesaplamaya devam etmek istiyorsanız \'E\' yi tuşlayınız... \n");
            scanf(" %c", &devam);
        }
        else if (sayi < 0) {
            printf("Lütfen (TK: [0,∞) aralığında bir değer giriniz... \n");
        }
        else {
            printf("Lütfen ");
        }
    }
    
    printf("Program sonlandırılıyor... \n");
    
    return 0;
}
