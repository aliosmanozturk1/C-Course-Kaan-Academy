#include <stdio.h>

int main() {

    int i;
    int j;
   
    
    for (i=1; i<=5; i++) {
        for (j=1; j<=5; j++) {
            printf("i: %d, j: %d\n", i, j);
        }
    }
    
    
    
    int ii;
    int jj;
    
    for (ii=1, jj=1; ii<=5 || jj<=5; ii++, jj++) {
        printf("ii: %d, jj: %d\n", ii, jj);
    }
    
    
    
    int r;
    int t;
    
    for (r=1; r<=10; r++) {
        for (t=1; t<=10; t++) {
            printf("%d x %d = %d\t\t", r, t, r * t);
        }
        printf("\n");
    }
    
    return 0;
}
