// File : gabungan.c
// Penulis : andi irham m (andi.irhamm@gmail.com)
// Deskripsi :
// Contoh perbandingan nilai numerik

#include<stdio.h>
int main(){
    // Kamus
    int uang = 6000;
    int hujan = 0; // hujan = False

    // Program
    printf("uang>5000 dan tidak hujan: %d \n", (uang>5000) && (!hujan));

    uang = 6000;
    hujan = 1; // hujan = True
    printf("uang>5000 dan tidak hujan: %d \n", (uang>5000) && (!hujan));

    int angkot = 1; // angkot = True;
    printf("uang>5000 dan tidak hujan atau ada angkot: %d \n", (uang>5000)&&(!hujan)||angkot);
    return 0;
}
