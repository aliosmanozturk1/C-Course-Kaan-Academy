#include <stdio.h>

int main() {

    int i;
    
    for (i=0; i<10; i++) {
        printf("%d \n", i);
    }
    
    
    
    int ii;
    
    for (ii=0; ii<10; ii++) {
        
        if (ii % 2 != 0) {
            printf("%d \n", ii);    // Sadece tek sayılar basılır.
        }
    }
    
    
    
    int iii;
    
    for (iii=0; iii<10; iii++) {
        
        if (iii % 2 == 0) {
            printf("%d \n", iii);    // Sadece çift sayılar basılır.
        }
    }
    
    
    
    int k;
    
    for (k=0; k<10; k = k+2) {
        
        printf("%d \n", k);           // Sadece çift sayılar basılır.
    }
    
    
    
    int r;
    
    for (r=0; r<10; r++) {
        
        printf("%d \n", r);
        break;
    }
    printf("Döngümüz kırıldı...\n");
    
    
    
    int rr;
    
    for (rr=0; rr<10; rr++) {
        
        if (rr % 2 == 0) {
            printf("%d \n", rr);        // Sadece çift sayılar basılır.
            continue;
        }
        printf("XXXXXXXXX %d\n",rr);    // Sadece tek sayılar basılır.
    }
    
    
    
    return 0;
}
