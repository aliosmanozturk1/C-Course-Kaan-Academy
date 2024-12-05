#include <stdio.h>

int main() {
 
    int likeSayisi;
    double likeYuzdesi;
    
    for (int i=1; i<=5; i++) {
        printf("%d. Sanatçının beğenilme sayısı: ", i);
        scanf("%d", &likeSayisi);
        likeYuzdesi = (double) likeSayisi / 100;
        printf("%d. Sanatçının beğenilme yüzdesi = %.2lf\n", i, likeYuzdesi);
    }
    
    // Aynısını while döngüsü ile yapalım.
    
    int j=1;
    
    while (j<=5) {
        printf("%d. Sanatçının beğenilme sayısı: ", j);
        scanf("%d", &likeSayisi);
        likeYuzdesi = (double) likeSayisi / 100;
        printf("%d. Sanatçının beğenilme yüzdesi = %.2lf\n", j, likeYuzdesi);
        j++;
    }
    
    // Aynısını do-while döngüsü ile yapalım.
    
    int jj=1;
    
    do {
        printf("%d. Sanatçının beğenilme sayısı: ", jj);
        scanf("%d", &likeSayisi);
        likeYuzdesi = (double) likeSayisi / 100;
        printf("%d. Sanatçının beğenilme yüzdesi = %.2lf\n", jj, likeYuzdesi);
        jj++;
    } while (jj<=5);
    
    
    // Başka örnekler
    
    int forI, whileI, doWhileI;
    
    for (forI = 1; forI <= 10; forI++) {
        printf("%d ", forI);
    }
    
    
    whileI = 1;
    
    while (whileI <= 10) {
        printf("%d ", whileI);
        whileI++;
    }
    
    
    doWhileI = 1;
    do {
        printf("%d ", doWhileI);
        doWhileI++;
    } while (doWhileI <= 10);
    return 0;
}
