#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    
    char karaktereGoreSecim2;
    
    printf("Lütfen aşağıdaki karakterlerden seçiminizi yapınız... \n");
    printf("a, o, r, s \n");
    
    scanf(" %c", &karaktereGoreSecim2);
    
    switch (tolower(karaktereGoreSecim2)) {             // Bunu ctype.h kütüphanesi sayesinde yaptık.
        case ('a'):
            printf("Ali \n");
            break;
        case 'o':
            printf("Osman \n");
            break;
        case 'r':
            printf("Rümeysa \n");
            break;
        case 's':
            printf("Sakaoğlu \n");
            break;
        default:
            printf("Böyle bir isim tanımlı değil. \n");
            break;
    }
    
    printf("Switch - Case işlemi tamamlandı. \n");
    
    return 0;
}
