// File : relasional.c
// Penulis : Andi Irham M (andi.irhamm@gmail.com)
// Deskripsi :
// Contoh perbandingan nilai numerik

#include<stdio.h>
int main(){
    // Kamus
    int X = 5;
    int Y = 8;

    // Program
    printf("Hasil X < Y : %d \n", X < Y);
    printf("Hasil X > Y : %d \n", X > Y);
    printf("Hasil X <= Y : %d \n", X <= Y);
    printf("Hasil X >= Y : %d \n", X >= Y);
    printf("Hasil X == Y : %d \n", X == Y); // operator kesamaan
    printf("Hasil X != Y : %d \n", X != Y); // operator ketidaksamaan

    // jangan lupakan '=' berarti assignment atau memberi nilai
    // jangan lupakan '==' berarti operator perbandingan "sama dengan"
    return 0;
}
