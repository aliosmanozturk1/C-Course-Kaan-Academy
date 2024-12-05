#include <stdio.h>

int main() {
/*
    char isim[4] = "Ali";
    printf("%s\n", isim);
    
    for (int i=0; i<4; i++) {
        printf("%d. elemanı: %c\n", i, isim[i]);
    }
    
    
    char isim2[4] = {'A','l','i','\0'};
    printf("%s\n", isim2);
    
    for (int ii=0; ii<4; ii++) {
        printf("%d. elemanı: %c\n", ii, isim2[ii]);
        if (isim2[ii] == '\0') {
            printf("Dizimiz tamamlandı.\n");
        }
    }
    
    char isim3[] = {'A','l','i','\0'};
    printf("%s\n", isim3);
    
    for (int iii=0; iii<4; iii++) {
        printf("%d. elemanı: %c\n", iii, isim3[iii]);
        if (isim3[iii] == '\0') {
            printf("Dizimiz tamamlandı.\n");
        }
    }
    
    */
    
    char takimIsmi[6] = "Ulgen";
    printf("%s\n", takimIsmi);
    
    for (int j=0; j<6; j++) {
        printf("%d. elemanı: %c\n", j, takimIsmi[j]);
    }
    
    
    char takimIsmi2[] = "Ulgen";
    printf("%s\n", takimIsmi2);
    
    for (int jj=0; jj<6; jj++) {
        printf("%d. elemanı: %c\n", jj, takimIsmi2[jj]);
    }
    
    
    char takimIsmi3[6] = {'U','L','G','E','N','\0'};
    printf("%s\n", takimIsmi3);
    
    for (int jjj=0; jjj<6; jjj++) {
        printf("%d. elemanı: %c\n", jjj, takimIsmi3[jjj]);
    }
    
    
    char takimIsmi4[] = {'U','L','G','E','N','\0'};
    printf("%s\n", takimIsmi4);
    
    for (int jjjj=0; jjjj<6; jjjj++) {
        printf("%d. elemanı: %c\n", jjjj, takimIsmi4[jjjj]);
    }
    
    
    
    char ulke[7];
    
    for (int k=0; k<6; k++) {
        printf("Lütfen bir karakter dizisi giriniz...\n");
        scanf(" %c", &ulke[k]);
    }
    printf("\n");
    printf("%s\n", ulke);
   
    for (int k=0; k<6; k++) {
        printf("%c\n", ulke[k]);
    }
    printf("Döngü bitti!\n");
    
    
    
    return 0;
}
