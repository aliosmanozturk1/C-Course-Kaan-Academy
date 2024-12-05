#include <stdio.h> // Standart Input Output Header
//#include <locale.h>
#define pi 3.14    // Pi sayısını define ettik. (Tanımladık)

int main() {
    
    //setlocale(LC_ALL, "Turkish");       Türkçe karakterde sıkıntı çıkarsa bu yazılır.
    
    
    
    printf("Ali Osman \n"); // n --> newline (Yeni Satır)    t --> tab (Tab kadar boşluk bırak.)    a --> alarm
    printf("Öztürk \n");
    printf("Kar Oranı %% 5 \n");
    
    
    
    int sayi;
    
    printf("Lütfen Yaşınızı Giriniz \n");
    
    scanf("%d" , &sayi); // Input
    printf("Doğum Yılınz: %d \n", 2020 - sayi); // Output
    
    
    
    const double piSayimiz = 3.14; // Const sabittir. Sonradan başka değer atanamaz.
    printf("Pi sayınız = %f \n", piSayimiz);
    
    
    
    float yaricap;
    printf("Çemberin Yarıçapını Giriniz \n");
    scanf("%f", &yaricap);
    printf("Çemberin Çevresi = %f \n", 2*piSayimiz*yaricap);
    
    
    
    
    /*
    int           // 4 byte (32 bit)
    short int     // 2 byte (16 bit)
    long int      // 4 byte (32 bit)       long int ile int aynı anlama geliyor.
    float         // 4 byte (32 bit)
    double        // 8 byte (64 bit)
    char          // 1 byte (8 bit)
    */
    
    
    
    // printf("%verinintipi \n", verininadı);
    
    int tamSayi = 6;
    printf("%d \n", tamSayi);
    
    float kesirliSayi = 3.6;
    printf("%f \n", kesirliSayi);
    
    double buyukYerKaplayanKesirliSayi = 7.294;
    printf("%f \n", buyukYerKaplayanKesirliSayi);
    
    char karakter = 'R';
    printf("%c \n", karakter);
    
    char karakterDizisi[4] = "Ali";     // 4 byte'lık yer tutar. Kaç karakter dizisi varsa +1 daha koyulur. Çünkü karakter dizisini \0 bitirir.
    printf("%s \n", karakterDizisi);
    
    char karakterDizisi2[10] = {'A','l','i',' ','O','s','m','a','n'};
    printf("%s \n", karakterDizisi2);
    
    char karakterDizisi3[] = "Osman";
    printf("%s \n", karakterDizisi3);
    
    
    
    float kesirliSayi2 = 3.9;
    printf("%.2f \n", kesirliSayi2);   // %.2f, sayının noktadan sonraki kısmındaki 2 basamağı yazdır demektir.
    
    float kesirliSayi3 = 2.34;
    printf("%.4f \n", kesirliSayi3);   // %.4f, sayının noktadan sonraki kısmındaki 4 basamağı yazdır demektir.
    
    int tamSayi2 = 9;
    printf("%10d \n", tamSayi2);        // %10d, sayıyı 10.basamaktan itibaren yazdır demektir.
    
    
    
    int tamSayi3 = 7;
    printf("%d sayısı RAM'de %d byte yer kaplar. \n", tamSayi3, sizeof(int));
    
    int tamSayi4 = 221;
    printf("%d sayısı RAM'de %d byte yer kaplar. \n", tamSayi4, sizeof(int));
    
    float kesirliSayi4 = 6.9;
    printf("%.2f sayısı RAM'de %d byte yer kaplar. \n", kesirliSayi4, sizeof(float));
    
    double buyukYerKaplayanKesirliSayi2 = 4.213;
    printf("%.4f sayısı RAM'de %d byte yer kaplar. \n", buyukYerKaplayanKesirliSayi2, sizeof(double));
    
    char karakter2 = 'A';
    printf("%c karakteri RAM'de %d byte yer kaplar. \n", karakter2, sizeof(char));
    
    
    
    int sayimiz;
    printf("Lütfen Bir Sayı Giriniz... \n");
    scanf("%d", &sayimiz);
    printf("Girdiğiniz Sayı: %d \n", sayimiz);
    
    
    float kesirliSayimiz;
    printf("Lütfen Bir Kesirli Sayı Giriniz... \n");
    scanf("%f", &kesirliSayimiz);
    printf("Girdiğiniz Kesirli Sayı: %f \n", kesirliSayimiz);
    
    
    double buyukKesirliSayimiz;
    printf("Lütfen Bir Kesirli Sayı Giriniz... \n");
    scanf("%lf", &buyukKesirliSayimiz);                 // lf --> longfloat (double)
    printf("Girdiğiniz Kesirli Sayı: %lf \n", buyukKesirliSayimiz);
    
    
    char karakterimiz;
    printf("Lütfen Bir Karakter Giriniz... \n");
    scanf(" %c", &karakterimiz);        // karakter alabilmek için %c'den önce bir boşluk bırakılır.
    printf("Girdiğiniz Karakter: %c \n", karakterimiz);
    
    
    char karakterDizimiz[5];
    printf("Lütfen 4 Karakter Giriniz... \n");
    scanf("%s", &karakterDizimiz);
    printf("Girdiğiniz Karakterler: %s \n", karakterDizimiz);
    
    
    char karakterDizimiz2[5];
    printf("Lütfen 4 Karakter Giriniz... \n");
    scanf("%s", karakterDizimiz2);      // Karakter dizisi yazdırırken & koymaya gerek yoktur.
    printf("Girdiğiniz Karakterler: %s \n", karakterDizimiz2);
    
    
    char karakterDizimiz3[5];
    printf("Lütfen 4 Karakter Giriniz... \n");
    scanf("%s", &karakterDizimiz3[0]);
    printf("Girdiğiniz Karakterler: %s \n", karakterDizimiz3);
    
    
    char karakterDizimiz4[0];
    printf("Lütfen 4 Karakter Giriniz... \n");
    scanf("%s", &karakterDizimiz4[0]);
    printf("Girdiğiniz Karakterler: %s \n", karakterDizimiz4);
    
    
    
    int sayi1;
    sayi1 = 5;
    printf("%d \n", sayi1);
    
    
    int sayi2;
    sayi2 = 3;
    sayi2 = sayi2 + 5;
    printf("%d \n", sayi2);
    
    
    int sayi3;
    sayi3= 4;
    sayi3++;
    printf("%d \n", sayi3);
    
    
    int sayi4;
    sayi4 = 6;
    sayi4 += 1;
    printf("%d \n", sayi4);
    
    
    int sayi5;
    sayi5 = 9;
    sayi5 = sayi5 - 5;
    printf("%d \n", sayi5);
    
    
    int sayi6;
    sayi6= 4;
    sayi6--;
    printf("%d \n", sayi6);
    
    
    int sayi7;
    sayi7 = 6;
    sayi7 -= 1;
    printf("%d \n", sayi7);
    
    
    int sayi8;
    sayi8 = 9;
    sayi8 = sayi8 * 5;
    printf("%d \n", sayi8);
    
    
    int sayi9;
    sayi9 = 6;
    sayi9 *= 2;
    printf("%d \n", sayi9);
    
    
    int sayi10;
    sayi10 = 20;
    sayi10 = sayi10 / 5;
    printf("%d \n", sayi10);
    
    
    int sayi11;
    sayi11 = 6;
    sayi11 /= 2;
    printf("%d \n", sayi11);
    
    
    int sayi12;
    sayi12 = 36;
    sayi12 = sayi12 % 5;        // % işareti mod (bölümünden kalan) almayı sağlar.
    printf("%d \n", sayi12);
    
    
    int sayi13;
    sayi13 = 15;
    sayi13 %= 4;
    printf("%d \n", sayi13);
    
    
    int sayim1, sayim2, sayim3;
    sayim1 = 4;
    printf("%d \n", sayim1);
    sayim2 = sayim1++;          // Burda sayim1'in solunda bir şey yazmadığı için sayim1 doğrudan sayim2'ye eşitlenecek.
    printf("%d \n", sayim2);    // Ama sayim1'e yinede bir eklenmiş olacak. Yani sayim2=4, sayim1= 5 olacaktır.
    sayim3 = ++sayim1;          // Burda sayim1'in solunda ++ yazdığı için sayim1'e 1 artacak  ve sayim3 oluşacak.
    printf("%d \n", sayim3);    // Yani sayim3 = 6, sayim1 = 6
    printf("%d %d %d \n", sayim1, sayim2, sayim3);
    
    
    
    int kareninBirKenari;
    printf("Karenin bir kenarını cm cinsinden giriniz... \n");
    scanf("%d", &kareninBirKenari);
    printf("Karenin alanı: %d cm \n", kareninBirKenari * kareninBirKenari);
    
    
    int dikdortgeninKisaKenari, dikdortgeninUzunKenari;
    printf("Dikdörtgenin kısa ve uzun kenarlarını cm cinsinden girniniz... \n");
    scanf("%d %d", &dikdortgeninKisaKenari, &dikdortgeninUzunKenari);
    printf("Dikdörtgenin alanı: %d cm \n", dikdortgeninKisaKenari * dikdortgeninUzunKenari);
    
    
    int dikdortgeninKisaKenari2, dikdortgeninUzunKenari2;
    printf("Dikdörtgenin kısa kenarını cm cinsinden girininiz... \n");
    scanf("%d", &dikdortgeninKisaKenari2);
    printf("Dikdörtgenin uzun kenarını cm cinsinden girininiz... \n");
    scanf("%d", &dikdortgeninUzunKenari2);
    printf("Dikdörtgenin alanı: %d cm \n", dikdortgeninKisaKenari2 * dikdortgeninUzunKenari2);
    
    
    int dikdortgeninKisaKenari3, dikdortgeninUzunKenari3;
    printf("Dikdörtgenin kısa ve uzun kenarlarını cm cinsinden girniniz... \n");
    scanf("%d %d", &dikdortgeninKisaKenari3, &dikdortgeninUzunKenari3);
    int dikdortgeninAlani = dikdortgeninKisaKenari3 * dikdortgeninUzunKenari3;
    printf("Dikdörtgenin alanı: %d cm \n", dikdortgeninAlani);
    
    
    float piSayisi = 3.14;
    float cemberinYariCapi;
    printf("Çemberin çapını giriniz... \n");
    scanf("%f", &cemberinYariCapi);
    printf("Çemberin alanı:  %f \n", piSayisi * cemberinYariCapi * cemberinYariCapi);
    printf("Çemberin çevresi: %f \n", 2 * piSayisi * cemberinYariCapi);
    
    
    // pi sayısını kod satırının en başında define ettik onu kullanacağız burada.
    float cemberinYariCapi2;
    printf("Çemberin çapını giriniz... \n");
    scanf("%f", &cemberinYariCapi2);
    printf("Çemberin alanı:  %f \n", pi * cemberinYariCapi2 * cemberinYariCapi2);
    printf("Çemberin çevresi: %f \n", 2 * pi * cemberinYariCapi2);
    
    
    float kupBirKenari;
    printf("Küpün bir kenarının uzunluğunu giriniz... \n");
    scanf("%f", &kupBirKenari);
    printf("Küpün yanal alanlarının toplamı: %f \n", 6 * kupBirKenari * kupBirKenari);
    printf("Küpün hacmi: %f \n", kupBirKenari * kupBirKenari * kupBirKenari);
    
    
    float kupBirKenari2;
    printf("Küpün bir kenarının uzunluğunu giriniz... \n");
    scanf("%f", &kupBirKenari2);
    float yanalAlanlarinToplami = 6 * kupBirKenari2 * kupBirKenari2;
    float kupunHacmi = kupBirKenari2 * kupBirKenari2 * kupBirKenari2;
    printf("Küpün yanal alanlarının toplamı: %f \n", yanalAlanlarinToplami);
    printf("Küpün hacmi: %f \n", kupunHacmi);
    
    
    
    float a,b,c,x;
    printf("Sırasıyla a,b,c ve x değerlerini giriniz... \n");
    scanf("%f %f %f %f", &a, &b, &c, &x);
    float sonuc = a * x * x + b * x + c;
    printf("Denklemin sonucu: %f \n", sonuc);
    
    
    float d,e,f,y;
    printf("Sırasıyla a,b,c ve x değerlerini giriniz... \n");
    scanf("%f %f %f %f", &d, &e, &f, &y);
    float sonuc2 = d * y * y + e * y + f;
    printf("Denklemin sonucu: %d \n", (int) sonuc2);        // Sonucun sadece tamsayılı kısmını görmek için int'e çevirdik.
    
    
    
    // int --> float --> double
    int r = 30;
    float s = 30;
    double q = 30;
    
    printf("int/float : %d \n", r / s);         // Yanlış
    printf("int/float : %f \n", r / s);         // Doğru
    printf("int/double : %d \n", r / q);        // Yanlış
    printf("int/double : %f \n", r / q);        // Doğru
    printf("int/double : %lf \n", r / q);       // Doğru
    printf("float/double : %f \n", s / q);      // Doğru
    printf("double/float : %f \n", q / s);      // Doğru
    printf("float/double : %lf \n", s / q);     // Doğru
    printf("double/float : %lf \n", q / s);     // Doğru
    
    
    int g = 5;
    printf("%d \n", (float) g);     // Yanlış
    printf("%f \n", (float) g);     // Doğruw
    
    
    
    int bizimSayimiz, onBinler, binler, yuzler, onlar, birler;
    printf("Beş basamaklı bir sayı giriniz... \n");
    scanf("%d", &bizimSayimiz);
    
    onBinler = bizimSayimiz / 10000;
    printf("On binler basamağı --> %d \n", onBinler);
    
    binler = (bizimSayimiz % 10000) / 1000;
    printf("Binler basamağı --> %d \n", binler);
    
    yuzler = (bizimSayimiz % 1000) / 100;
    printf("Yüzler basamağı --> %d \n", yuzler);
    
    onlar = (bizimSayimiz % 100) / 10;
    printf("Onlar basamağı --> %d \n", onlar);
    
    birler = (bizimSayimiz % 10) / 1;
    printf("Birler Basamağı --> %d \n", birler);
    
    printf("%d  %d  %d  %d  %d \n", onBinler, binler, yuzler, onlar, birler);
    
     
    
    
    return 0; // Program başarılı bir şekilde çalışırsa ekranda sıfır yazar.
    
}
