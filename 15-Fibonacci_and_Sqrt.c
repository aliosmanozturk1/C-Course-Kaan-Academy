#include <stdio.h>
#include <math.h>

int main() {
    
    int x = 1;
    int y = 1;
    int z;
    
    printf("%d\n",x);
    printf("%d\n",y);

    for (int i = 0; i<10; i++) {
        z = x + y;
        x = y;
        y = z;
        printf("%d\n", z);
    }
    
    
    
    int j;
    
    for (j=1; j<21; j++) {
        printf("%d'nin karekökü: %f\n", j, sqrt(j));
    }

    
    return 0;
}
