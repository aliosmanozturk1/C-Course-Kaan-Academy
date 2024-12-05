#include <stdio.h>

int main() {

    int biletSayisi = 100;
    char biletAl;
    int istenenBilet;
    
    for (; biletSayisi > 0;) {
        printf("Bilet almak ister misiniz? E/H ?\n");
        scanf(" %c", &biletAl);
        
        if (biletAl == 'E' || biletAl == 'e') {
            
            printf("Kaç tane bilet almak istiyorsunuz...\n");
            scanf("%d", &istenenBilet);
            
            if (istenenBilet <= biletSayisi) {
                biletSayisi -= istenenBilet;
            }
            else {
                printf("Maksimum 100 bilet alabilirsiniz!\n");
            }
            
        }
        else if (biletAl == 'H' || biletAl == 'h'){
            break;
        }
        else {
            printf("Lütfen yalnızca E/H seçimi yapınız.\n");
        }
        
        if (biletSayisi == 0) {
            printf("Alınan bilet sayısı: %d\n", 100-biletSayisi);
            printf("Biletler tükendi!\n");
        }
        else {
            printf("Alınan bilet sayısı: %d\n", 100-biletSayisi);
            printf("Kalan bilet sayısı: %d\n", biletSayisi);
        }
    }
    printf("Toplam alınan bilet sayısı: %d\n", 100-biletSayisi);
    printf("Kalan bilet sayısı: %d\n", biletSayisi);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
