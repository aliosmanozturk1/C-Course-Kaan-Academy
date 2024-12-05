#include <stdio.h>



int main() {
    
    printf("MENÜ \t\t Sipariş Kodu \t\t Fiyatı \n");
    printf("Başlangıç \t\t 1 \t\t\t\t 5,5 TL \n");
    printf("Ara Sıcak \t\t 2 \t\t\t\t 7,5 TL \n");
    printf("Salata    \t\t 3 \t\t\t\t 12 TL \n");
    printf("Ana Yemek \t\t 4 \t\t\t\t 17,75 TL \n");
    printf("Tatlı     \t\t 5 \t\t\t\t 11,25 TL \n");
    printf("İçecek    \t\t 6 \t\t\t\t 2,25 TL \n");

    int siparisNumarasi;
    float toplamTutar;
    float porsiyon;
    
    menu:
    
    printf("Lütfen istediğiniz ürünün sipariş kodunu giriniz... \n");
    printf("Toplamı hesaplattırmak için -1 'i giriniz! \n");
    scanf("%d", &siparisNumarasi);
    
    if (siparisNumarasi == -1) {
        goto cikis;
    }
    
    if (siparisNumarasi > 0 && siparisNumarasi < 7) {
        printf("Lütfen kaç porsiyon istediğinizi belirtiniz... \n");
        scanf("%f", &porsiyon);
        
    }
        
    switch (siparisNumarasi) {
        case 1:
            if (porsiyon > 0) {
                toplamTutar += porsiyon * 5.5;
                printf("Şuanki tutar: %.2f \n", toplamTutar);
            }
            else {
                printf("Lütfen sıfırdan büyük bir değer giriniz... \n");
            }
            break;
        case 2:
            if (porsiyon > 0) {
                toplamTutar += porsiyon * 7.5;
            printf("Şuanki tutar: %.2f \n", toplamTutar);
            }
            else {
                printf("Lütfen sıfırdan büyük bir değer giriniz... \n");
            }
            break;
        case 3:
            if (porsiyon > 0) {
                toplamTutar += porsiyon * 12;
                printf("Şuanki tutar: %.2f \n", toplamTutar);
            }
            else {
                printf("Lütfen sıfırdan büyük bir değer giriniz... \n");
            }
            break;
        case 4:
            if (porsiyon > 0) {
                toplamTutar += porsiyon * 17.75;
                printf("Şuanki tutar: %.2f \n", toplamTutar);
            }
            else {
                printf("Lütfen sıfırdan büyük bir değer giriniz... \n");
            }
            break;
        case 5:
            if (porsiyon > 0) {
                toplamTutar += porsiyon * 11.25;
                printf("Şuanki tutar: %.2f \n", toplamTutar);
            }
            else {
                printf("Lütfen sıfırdan büyük bir değer giriniz... \n");
            }
            break;
        case 6:
            if (porsiyon > 0) {
                toplamTutar += porsiyon * 2.25;
                printf("Şuanki tutar: %.2f \n", toplamTutar);
            }
            else {
                printf("Lütfen sıfırdan büyük bir değer giriniz... \n");
            }
            break;
        default:
            printf("Lütfen 1 - 6 arasında bir değer giriniz... \n");
            break;
        }

    goto menu;
    
     cikis:
    printf("Siparişiniz tamamlanmıştır. \n");
    printf("Toplam tutar:  %.2f \n", toplamTutar);
    
    
    return 0;
}
