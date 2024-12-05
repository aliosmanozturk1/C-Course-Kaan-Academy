#include <stdio.h>

int main() {
    
    int sayi;
    int faktoriyelSonuc = 1;
    
    printf("Faktöriyelini almak istediğiniz sayıyı giriniz...\n");
    scanf("%d", &sayi);
    
    int kullanicininSayisi = sayi;
   
    if (sayi >= 0) {
        
        while (sayi >= 0) {
            
            if (sayi == 0) {
                faktoriyelSonuc *= 1;
            }
            else {
                faktoriyelSonuc *= sayi;
            }
            
            sayi--;
        }
        
        printf("%d! = %d \n", kullanicininSayisi, faktoriyelSonuc);
        
    }
    else {
        printf("Lütfen [0,∞) aralığında bir sayı giriniz! \n");
    }
    
    
    
    
     return 0;
}
