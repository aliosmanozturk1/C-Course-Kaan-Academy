#include <stdio.h>



int main() {
   
    // Kontrol Yapıları (If - Else if - Else, Switch - Case)
    
    // If - Else if - Else
    
    
    
    int yas;
    
    printf("Lütfen yaşınızı giriniz... \n");
    scanf("%d", &yas);
    
    if (yas >= 18) {     // Eğer (if) yaş 18'den büyükse
        
        printf("Reşitsiniz. \n");
        
    }
    else {              // Değilse (else)
        
        printf("Reşit değilsiniz. \n");
        
    }
    
    
    
    int not;
    
    printf("Lütfen notunuzu giriniz... \n");
    scanf("%d", &not);
    
    if (not <= 20) {
        printf("Berbat \n");
    }
    else if (not <= 40) {
        printf("Kötü \n");
    }
    else if (not <= 60) {
        printf("Orta \n");
    }
    else if (not <= 80) {
        printf("İyi \n");
    }
    else {
        printf("Çok iyi \n");
    }
    
    
    /*
    <   --> küçüktür
    >   --> büyüktür
    ==   --> eşittir.
    (Tek eşit kullanılmamasının sebebi, tek eşitin değer atama için kullanılıyor olmasıdır.
    (İki eşiti de eşit mi değil mi onu kontrol etmek için kullanırız.)
    !=  --> eşit değildir.
    <=  --> küçük eşittir.
    >=  --> büyük eşittir.
    &&  --> ve (ikiside doğru olmalı)
    ||  --> veya (ikisinden biri doğru olmalı)
    */
    
    
    int not2;
    
    printf("Lütfen notunuzu giriniz... \n");
    scanf("%d", &not2);
    
    if (not2 >= 80) {                       // Eğer not2 80'den büyük eşitse
        printf("Çok İyi \n");               // Çok İyi
    }
    else if (not2 < 80 && not2 >= 60) {     // O değilse eğer not2 [60,80) aralığındaysa
        printf("İyi \n");                   // İyi
    }
    else if (not2 < 60 && not2 >= 40) {     // O değilse eğer not2 [40,60) aralığındaysa
        printf("Orta \n");                  // Orta
    }
    else if (not2 < 40 && not2 >=20) {      // O değilse eğer not2 [20,40) aralığındaysa
        printf("Kötü \n");                  // Kötü
    }
    else {                                  // Hiçbiri değilse
        printf("Çok Kötü \n");              // Çok Kötü
    }
    
    
    
    int not3;
    
    printf("Lütfen notunuzu giriniz... \n");
    scanf("%d", &not3);
    
    if (not3 < 0 || not3 > 100) {
        printf("Lütfen Notunuzu 0 - 100 Arasında Giriniz! \n");
    }
    else if (not3 <= 100 && not3 >= 80) {
        printf("Çok İyi \n");
    }
    else if (not3 < 80 && not3 >= 60) {
        printf("İyi \n");
    }
    else if (not3 < 60 && not3 >= 40) {
        printf("Orta \n");
    }
    else if (not3 < 40 && not3 >=20) {
        printf("Kötü \n");
    }
    else {
        printf("Çok Kötü \n");
    }
    
    
    
    int not4;
    
    printf("Lütfen notunuzu giriniz... \n");
    scanf("%d", &not4);
    
    if (not4 <= 100 && not4 >= 80) {
        printf("Çok İyi \n");
    }
    else if (not4 < 80 && not4 >= 60) {
        printf("İyi \n");
    }
    else if (not4 < 60 && not4 >= 40) {
        printf("Orta \n");
    }
    else if (not4 < 40 && not4 >= 20) {
        printf("Kötü \n");
    }
    else if (not4 < 20 && not4 >= 0) {
        printf("Çok Kötü \n");
    }
    else {
        printf("Lütfen Notunuzu 0 - 100 Arasında Giriniz! \n");
    }
    
    
    
    int sizinsayiniz;
    
    printf("Lütfen sayıyı giriniz... \n");
    scanf("%d", &sizinsayiniz);
    
    if (sizinsayiniz > 0) {
        printf("Sayınız pozitiftir. \n");
    }
    else if (sizinsayiniz == 0) {
        printf("Sayınız sıfırdır. \n");
    }
    else {
        printf("Sayınız negatiftir. \n");
    }
    
    
    
    int benimSayim;
    
    printf("Lütfen bir sayı giriniz... \n");
    scanf("%d", &benimSayim);
    
    if (benimSayim % 10 == 0 ) {
        printf("%d sayısı 10'a tam bölünmektedir. \n", benimSayim);
    }
    else {
        printf("%d sayısı 10'a kalanlı bölünmektedir . \n", benimSayim);
    }
    
    
    
    char cinsiyet;
    
    printf("Lütfen cinsiyetinizi giriniz... \n");
    printf("Erkek ise E, Kadın ise K olarak giriniz. \n");
    scanf(" %c", &cinsiyet);
    
    if (cinsiyet == 'E' || cinsiyet == 'e') {
        printf("Siz erkeksiniz. \n");
    }
    else if (cinsiyet == 'K' || cinsiyet == 'k'){
        printf("Siz kadınsınız. \n");
    }
    else {
        printf("Lütfen cinsiyetinizi doğru giriniz. \n");
    }
    
     
    
    char cinsiyetiniz;
    float boyunuz;
    
    printf("Lütfen sırasıyla cinsiyetinizi (E/K) ve boyunuzu (cm) giriniz... \n");
    scanf(" %c %f", &cinsiyetiniz, &boyunuz);
    
    if ((cinsiyetiniz == 'E' || cinsiyetiniz == 'e') && (boyunuz >= 165 && boyunuz <= 200)) {
        printf("Sayın erkek aday Askeri Okula başvurabilirsiniz. \n");
    }
    else if ((cinsiyetiniz == 'K' || cinsiyetiniz == 'k') && (boyunuz >= 160 && boyunuz <= 195)) {
        printf("Sayın kadın aday Askeri Okula başvurabilirsiniz. \n");
    }
    else {
        printf("Sayın aday Askeri Okula başvuramazsınız. \n");
    }
    
    
    
    int urunAdeti;
    
    printf("Kaç adet ürün alacaksınız? \n");
    scanf("%d", &urunAdeti);
    
    if (urunAdeti >= 1 && urunAdeti < 100) {
        printf("Adet fiyatı: 5 TL \n");
        printf("Toplam tutar: %d TL \n", urunAdeti * 5);
    }
    else if (urunAdeti >= 100 && urunAdeti < 200) {
        printf("Adet fiyatı: 4,5 TL \n");
        printf("Toplam tutar: %.2f TL \n", urunAdeti * 4.5);
    }
    else if (urunAdeti >= 200 && urunAdeti < 300) {
        printf("Adet fiyatı: 4 TL \n");
        printf("Toplam tutar: %d TL \n", urunAdeti * 4);
    }
    else if (urunAdeti >= 300 && urunAdeti < 400) {
        printf("Adet fiyatı: 3,5 TL \n");
        printf("Toplam tutar: %.2f TL \n", urunAdeti * 3.5);
    }
    else if (urunAdeti >= 400) {
        printf("Adet fiyatı: 3 TL \n");
        printf("Toplam tutar: %d TL \n", urunAdeti * 3);
    }
    else {
        printf("Lütfen geçerli bir adet giriniz. \n");
    }
    
     
    
    int urunAdetimiz;
    float urunFiyatimiz;
    
    printf("Kaç adet ürün alacaksınız? \n");
    scanf("%d", &urunAdetimiz);
    
    if (urunAdetimiz >= 1 && urunAdetimiz < 100) {
        urunFiyatimiz = 5;
    }
    else if (urunAdetimiz >= 100 && urunAdetimiz < 200) {
        urunFiyatimiz = 4.5;
    }
    else if (urunAdetimiz >= 200 && urunAdetimiz < 300) {
        urunFiyatimiz = 4;
    }
    else if (urunAdetimiz >= 300 && urunAdetimiz < 400) {
        urunFiyatimiz = 3.5;
    }
    else if (urunAdetimiz >= 400) {
        urunFiyatimiz = 3;
    }
    else {
        printf("Lütfen geçerli bir adet giriniz. \n");
    }
    
    float toplamTutar = urunAdetimiz * urunFiyatimiz;
    int toplamTutarYuvarlama = urunAdetimiz * urunFiyatimiz;
    float yapilanIndirim = toplamTutar - toplamTutarYuvarlama;
    printf("Toplam Tutar: %.2f TL, Size Yapılan İndirim: %.2f TL, Ödenecek Tutar: %d TL \n", toplamTutar,yapilanIndirim, toplamTutarYuvarlama);
     
     
    
    int buyukSayi, kucukSayi;
    
    printf("Birbirinin katı olup olmadığını kontrol etmek istediğiniz iki tane sayı giriniz... \n");
    printf("Lütfen önce büyük sayıyı sonra küçük sayıyı giriniz... \n");
    scanf("%d %d", &buyukSayi, &kucukSayi);
    
    if (buyukSayi % kucukSayi == 0) {
        printf("%d sayısı %d sayısının bir çarpanıdır. \n", kucukSayi, buyukSayi);
    }
    else {
        printf("%d sayısı %d sayısının bir çarpanı değildir. \n", kucukSayi, buyukSayi);
    }
    
    
    
   float sayi1, sayi2, sayi3, kucukSayim, buyukSayim, toplam, carpim, ortalama;
    
    printf("Lütfen 3 farklı tam sayı değeri giriniz... \n");
    scanf("%f %f %f", &sayi1, &sayi2, &sayi3);
    
    toplam = sayi1 + sayi2 + sayi3;
    carpim = sayi1 * sayi2 * sayi3;
    ortalama = toplam / 3;              // --> (sayi1 + sayi2 + sayi3) / 3
    
    printf("Toplam: %.2f \nÇarpım: %.2f \nOrtalama: %.2f \n", toplam, carpim, ortalama);
  
    kucukSayim = sayi1;
    
    if (sayi2 < kucukSayim) {
        kucukSayim = sayi2;
    }
    if (sayi3 < kucukSayim) {
        kucukSayim = sayi3;
    }
    printf("Küçük Sayı: %.2f \n", kucukSayim);
    
    buyukSayim = sayi1;
    
    if (sayi2 > buyukSayim) {
        buyukSayim = sayi2;
    }
    if (sayi3 > buyukSayim) {
        buyukSayim = sayi3;
    }
    printf("Büyük Sayı: %.2f \n", buyukSayim);
    
    
    
    int benimSayim2;
    
    printf("Tek mi Çift mi olduğunu öğrenmek istediğinz sayıyı giriniz... \n");
    scanf("%d", &benimSayim2);
    
    if (benimSayim2 % 2 == 0 ) {
        printf("%d sayısı çift sayıdır. \n", benimSayim2);
    }
    else {
        printf("%d sayısı tek sayıdır. \n", benimSayim2);
    }
    
    
    
    int benimSayim3;
    
    printf("\"Tek\" mi \"Çift\" mi olduğunu öğrenmek istediğinz sayıyı giriniz... \n");
    scanf("%d", &benimSayim3);
    
    if (benimSayim3 % 2 == 0 ) {
        printf("%d sayısı çift sayıdır. \n", benimSayim3);
    }
    else if (benimSayim3 % 2 != 0) {
        printf("%d sayısı tek sayıdır. \n", benimSayim3);
    }
    
    
     
    char karakterim;
    
    printf("ASCII kodunu öğrenmek istedğiniz karakteri giriniz... \n");
    scanf(" %c", &karakterim);
    printf("%c'nin ASCII değeri: %d \n", karakterim, karakterim);
    
    
    
    char karakterim2;
    
    printf("Büyük mü Küçük mü olduğunu öğrenmek istediğiniz karakteri giriniz... \n");
    scanf(" %c", &karakterim2);
    
    int karakterinAsciiDeğeri = karakterim2;
    
    if (karakterinAsciiDeğeri >= 65 && karakterinAsciiDeğeri <= 90) {           // Büyük harfler [65,90] aralığındadır.
        printf("%c büyük bir harftir. \n", karakterim2);
    }
    else if (karakterinAsciiDeğeri >= 97 && karakterinAsciiDeğeri <= 122) {     // Küçük harfler [97,122] aralığındadır.
        printf("%c küçük bir harftir. \n", karakterim2);
    }
    else {
        printf("Lütfen a-z ya da A-Z aralğında bir karakter giriniz! \n");
    }
    
    
    
    char karakterim3;
    
    printf("Büyük mü Küçük mü olduğunu öğrenmek istediğiniz karakteri giriniz... \n");
    scanf(" %c", &karakterim3);
    
    if (karakterim3 >= 65 && karakterim3 <= 90) {
        printf("%c büyük bir harftir. \n", karakterim3);
    }
    else if (karakterim3 >= 97 && karakterim3 <= 122) {
        printf("%c küçük bir harftir. \n", karakterim3);
    }
    else {
        printf("Lütfen a-z ya da A-Z aralğında bir karakter giriniz! \n");
    }
    
    
    
    // Switch (Seçiyor) - Case (Yapıyor)
    
    
    
    int secim;
    
    printf("Lütfen Seçiminizi Yapınız... \n");
    printf("1. İlkbahar \n");
    printf("2. Yaz \n");
    printf("3. Sonbahar \n");
    printf("4. Kış \n");
    
    scanf("%d", &secim);
    
    switch (secim) {
        case 1:
            printf("Hava güzel... \n");
            break;
        case 2:
            printf("Hava sıcak... \n");
            break;
        case 3:
            printf("Hava yağmurlu... \n");
            break;
        case 4:
            printf("Hava soğuk... \n");
            break;
        default:
            printf("Lütfen 1 - 4 arasında seçim yapınız. \n");
            break;
    }
    
    
    
    char karaktereGoreSecim;
    
    printf("Lütfen aşağıdaki karakterlerden seçiminizi yapınız... \n");
    printf("a, o, r, s \n");
    
    scanf(" %c", &karaktereGoreSecim);      // scanf Türkçe karakterleri okuyamıyor. O yüzden case'in içine ç,ı,ö gibi Türkçe karakterler yazma.
    
    switch (karaktereGoreSecim) {
        case 'a':
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

    

    int ayinNumarasi;
    char ayinMevsimi;
    
    printf("Lütfen öğrenmek istediğiniz ayın numarasını giriniz... \n");
    printf("[1,12] aralığında bir değer seçiniz... \n");
    
    scanf("%d", &ayinNumarasi);
    
    switch (ayinNumarasi) {
        case 1:
            printf("%d numaralı Ay: Ocak \n", ayinNumarasi);
            ayinMevsimi = 'K' & 'k';
            break;
        case 2:
            printf("%d numaralı Ay: Şubat \n", ayinNumarasi);
            ayinMevsimi = 'K' & 'k';
            break;
        case 3:
            printf("%d numaralı Ay: Mart \n", ayinNumarasi);
            ayinMevsimi = 'I' & 'i';
            break;
        case 4:
            printf("%d numaralı Ay: Nisan \n", ayinNumarasi);
            ayinMevsimi = 'I' & 'i';
            break;
        case 5:
            printf("%d numaralı Ay: Mayıs \n", ayinNumarasi);
            ayinMevsimi = 'I' & 'i';
            break;
        case 6:
            printf("%d numaralı Ay: Haziran \n", ayinNumarasi);
            ayinMevsimi = 'Y' & 'y';
            break;
        case 7:
            printf("%d numaralı Ay: Temmuz \n", ayinNumarasi);
            ayinMevsimi = 'Y' & 'y';
            break;
        case 8:
            printf("%d numaralı Ay: Ağustos \n", ayinNumarasi);
            ayinMevsimi = 'Y' & 'y';
            break;
        case 9:
            printf("%d numaralı Ay: Eylül \n", ayinNumarasi);
            ayinMevsimi = 'S' & 's';
            break;
        case 10:
            printf("%d numaralı Ay: Ekim \n", ayinNumarasi);
            ayinMevsimi = 'S' & 's';
            break;
        case 11:
            printf("%d numaralı Ay: Kasım \n", ayinNumarasi);
            ayinMevsimi = 'S' & 's';
            break;
        case 12:
            printf("%d numaralı Ay: Aralık \n", ayinNumarasi);
            ayinMevsimi = 'K' & 'k';
            break;
        default:
            printf("Böyle bir ay/numara tanımlı değil. \n");
            break;
    }
    
    if (ayinMevsimi == ('I' & 'i')) {
        printf("İlkbahar Mevsimi \n");
    }
    else if (ayinMevsimi == ('Y' & 'y')) {
        printf("Yaz Mevsimi \n");
    }
    else if (ayinMevsimi == ('S' & 's')) {
        printf("Sonbahar Mevsimi \n");
    }
    else if (ayinMevsimi == ('K' & 'k')) {
        printf("Kış Mevsimi \n");
    }
    
    
    
    
    int ayinNumarasi2;
    char ayinMevsimi2;
    
    printf("Lütfen öğrenmek istediğiniz ayın numarasını giriniz... \n");
    printf("[1,12] aralığında bir değer seçiniz... \n");
    
    scanf("%d", &ayinNumarasi2);
    
    switch (ayinNumarasi2) {
        case 1:
            printf("%d numaralı Ay: Ocak \n", ayinNumarasi2);
            ayinMevsimi2 = 'k';
            break;
        case 2:
            printf("%d numaralı Ay: Şubat \n", ayinNumarasi2);
            ayinMevsimi2 = 'k';
            break;
        case 3:
            printf("%d numaralı Ay: Mart \n", ayinNumarasi2);
            ayinMevsimi2 = 'i';
            break;
        case 4:
            printf("%d numaralı Ay: Nisan \n", ayinNumarasi2);
            ayinMevsimi2 = 'i';
            break;
        case 5:
            printf("%d numaralı Ay: Mayıs \n", ayinNumarasi2);
            ayinMevsimi2 = 'i';
            break;
        case 6:
            printf("%d numaralı Ay: Haziran \n", ayinNumarasi2);
            ayinMevsimi2 = 'y';
            break;
        case 7:
            printf("%d numaralı Ay: Temmuz \n", ayinNumarasi2);
            ayinMevsimi2 = 'y';
            break;
        case 8:
            printf("%d numaralı Ay: Ağustos \n", ayinNumarasi2);
            ayinMevsimi2 = 'y';
            break;
        case 9:
            printf("%d numaralı Ay: Eylül \n", ayinNumarasi2);
            ayinMevsimi2 = 's';
            break;
        case 10:
            printf("%d numaralı Ay: Ekim \n", ayinNumarasi2);
            ayinMevsimi2 = 's';
            break;
        case 11:
            printf("%d numaralı Ay: Kasım \n", ayinNumarasi2);
            ayinMevsimi2 = 's';
            break;
        case 12:
            printf("%d numaralı Ay: Aralık \n", ayinNumarasi2);
            ayinMevsimi2 = 'k';
            break;
        default:
            printf("Böyle bir ay/numara tanımlı değil. \n");
            break;
    }
    
    if (ayinMevsimi2 == 'i') {
        printf("İlkbahar Mevsimi \n");
    }
    else if (ayinMevsimi2 == 'y') {
        printf("Yaz Mevsimi \n");
    }
    else if (ayinMevsimi2 == 's') {
        printf("Sonbahar Mevsimi \n");
    }
    else if (ayinMevsimi2 == 'k') {
        printf("Kış Mevsimi \n");
    }
    
    
    return 0;
}
