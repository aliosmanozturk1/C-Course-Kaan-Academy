#include <stdio.h>

int main() {
    
    int sayilar[] = {5,10};
    
    printf("%d\n", sayilar[0]);
    printf("%d\n", sayilar[1]);
    
    
    int sayilarr[2] = {5,10};
    
    printf("%d\n", sayilarr[0]);
    printf("%d\n", sayilarr[1]);
    
    
    int sayilar2 [] = {3,6,9,12,15};
    
    for (int i=0; i<5; i++) {
        printf("%d\t", sayilar2[i]);
    }
    printf("\n");
    
    
    
    int sayilar3 [] = {3,6,9,12,15};
    
    for (int i=0; i<5; i++) {
        printf("Sayılar dizisinin %d. elemanı: %d\n", i+1, sayilar3[i]);
    }
    
    
    
    float sayilarFloat [] = {1.6,2.7,3.8,123.9};
    
    for (int ii=0; ii<4; ii++) {
        printf("%.1f\t", sayilarFloat[ii]);
    }
    printf("\n");
    
    
    
    float sayilarFloat2 [5] = {};
    int j;
    
    for (j=0; j<5; j++) {
        printf("%.2f\t", sayilarFloat2[j]);
    }
    
    printf("\n");
    
    for (j=0; j<5; j++) {
        printf("%d. elemanı giriniz...\n", j+1);
        scanf("%f", &sayilarFloat2[j]);
    }
    
    for (j=0; j<5; j++) {
        printf("%.2f\t", sayilarFloat2[j]);
    }
   
    printf("\n");
    
    for (j=0; j<5; j++) {
        printf("%d. eleman: %2.f\n", j+1, sayilarFloat2[j]);
        
    }
   
    
    
    int sayiDizisi[] = {1,2,3,4};
    printf("%d\n", sayiDizisi[1]);
    
    sayiDizisi[1] = !sayiDizisi[1];
    printf("%d\n", sayiDizisi[1]);
    
    
    
    int sayiDizisi2[] = {5,6,7,8};
    printf("%d\n", sayiDizisi2[1]);
    
    sayiDizisi2[1] = !sayiDizisi2[1];
    printf("%d\n", sayiDizisi2[1]);
    
    
    
    int sayiDizisi3[] = {10,11,12,13};
    printf("%d\n", sayiDizisi3[1]);
    
    sayiDizisi3[1] = !sayiDizisi3[1];
    printf("%d\n", sayiDizisi3[1]);
    
    
    
    int sayiDizisi4[] = {1,0,3,4};
    printf("%d\n", sayiDizisi4[1]);
    
    sayiDizisi4[1] = !sayiDizisi4[1];
    printf("%d\n", sayiDizisi4[1]);
    
    
    
    int sayiDizisi5[] = {1,2,3,4};
    
    for (int z=0; z<4; z++) {
        sayiDizisi5[z] = !sayiDizisi5[z];
        printf("%d\t", sayiDizisi5[z]);
    }
    printf("\n");
    
    
    
    int sayiDizisi6[] = {0,0,0,0};
    
    for (int zz=0; zz<4; zz++) {
        sayiDizisi6[zz] = !sayiDizisi6[zz];
        printf("%d\t", sayiDizisi6[zz]);
    }
    
    return 0;
}
