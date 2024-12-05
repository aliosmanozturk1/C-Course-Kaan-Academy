#include <stdio.h>

int main() {

    int i;
    
    for(i=0; i<20; i++) {
        if (i % 2 == 0) {
            printf("%d çift sayıdır.\n", i);
        }
        else {
            printf("%d tek sayıdır.\n", i);
        }
    }
    
    
    
    int k;
    
    for(k=0; k<20; k = k + 2) {
        printf("%d çift sayıdır.\n", k);
    }
    
    
    int kk;
    
    for(kk=1; kk<20; kk = kk + 2) {
        printf("%d tek sayıdır.\n", kk);
    }
    
    
    
   for(int j=0; j<20; j++) {
        printf("%d\n", j);
    }
    
    
    
    int jj = 0;
    
    for(; jj<20; jj++) {
         printf("%d\n", jj);
     }
    
    
    int ii = 11;
    
    for(; ii>10 && ii<20; ii++) {
         printf("%d\n", ii);
     }
    
    
    
    int iii = 0;
    
    for(iii=15; iii<20; iii++) {
         printf("%d\n", iii);
     }
    
    
    
    int sayac;
    
    for (sayac=0; sayac<10; sayac++) {
        printf("%d \n",sayac);
    }
    printf("%d. Saniyede Sayaç Sonlandı.\n", sayac);
    
    
    
    int biletSayisi = 20;
    
    for (; biletSayisi > 0; biletSayisi--) {
        printf("%d\n", biletSayisi);
    }
    printf("Bilet sayısı: %d Yani biletler tükendi.\n", biletSayisi);
    
    
    
    int biletSayisi2 = 20;
    
    for (; biletSayisi2 > 0; biletSayisi2 = biletSayisi2 - 2) {
        printf("%d\n", biletSayisi2);
    }
    printf("Bilet sayısı: %d Yani biletler tükendi.\n", biletSayisi2);
    
    
    
    int biletSayisi3 = 20;
    
    for (; biletSayisi3 > 0; biletSayisi3 -= 2) {
        printf("%d\n", biletSayisi3);
    }
    printf("Bilet sayısı: %d Yani biletler tükendi.\n", biletSayisi3);
    
    
    
    int sayi;
    
    printf("Girdiğiniz sayıya ile 0 arasında kalan 5'e bölünebilen sayıları bastıralım!\n");
    printf("Lütfen bir sayıyı giriniz...\n");
    scanf("%d", &sayi);
    
    if (sayi >= 0) {
        for (int r=0; r<sayi; r+=5) {
            printf("%d\n", r);
         }
    }
    else {
        for (int r=0; r>sayi; r-=5) {
            printf("%d\n", r);
        }
    }
    
    
    
    int sayim;
    int toplam = 0;
    
    printf("Lütfen bir sayıyı giriniz...\n");
    scanf("%d", &sayim);
    
    for (int p=0; p<=sayim; p++) {
        toplam += p;
    }
    printf("0'dan %d'ye kadar olan sayıların toplamı: %d \n", sayim, toplam);
    
    
    return 0;
    
}
