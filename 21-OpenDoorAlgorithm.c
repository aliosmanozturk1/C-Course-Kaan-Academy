#include <stdio.h>

int main() {
    
    int acik[10] = {0}; // 10 tane kapım var ve başta bunların hepsi kapalı(0)
    
    int tur;
    int kapi;
    
    for (tur = 0; tur < 10; tur++) {
        for (kapi = tur; kapi < 10; kapi = kapi + tur + 1) {
            acik[kapi] = !acik[kapi];
            
        }
    }
    
    printf("Açık kapılarımız şunlardır:\n");
    
    for (kapi = 0; kapi < 10; kapi++) {
        if(acik[kapi]) {
            
            printf("%d ", kapi + 1);
            
        }
    }
    
    return 0;
}
