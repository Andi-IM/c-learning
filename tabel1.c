// File : tabel1.c
// Penulis : andi irham m (andi.irhamm@gmail.com)
// Deskripsi :
// Mendefinisikan array dan mengisi nilainya
#include<stdio.h>
int main(){
    // Kamus
    int Tab[5] = {1,2,3,4,5}; // Tab[0]=1; Tab[1]=2; ... Tab[4]=5;
    float TabX[3] = {1.5,3.5E2,9.99};
    char Tabchar[4]={'1','2','@','Z'};
    int i; // iterasi

    // Program
    // Menuliskan isi tab berderet ke kanan
    for(i=0;i<5;i++){
        printf("Tab[%d]=%d;\t",i, Tab[i]);
    }
    printf("\n");

    // tuliskan nilai TabX dan TabChar
    for(i=0;i<3;i++){
        printf("Tab[%d]=%5.2f;\t",i, TabX[i]);
    }
    printf("\n");

    for(i=0;i<4;i++){
        printf("Tab[%d]=%c;\t",i, Tabchar[i]);
    }
    printf("\n");
}
