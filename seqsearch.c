// File : seqsearch.c
// Penulis : Andi Irham M (andi.irhamm@gmail.com)
// Deskripsi :
// Menentukan posisi di mana elemen tabel bernilai X
#include<stdio.h>
int main(){
    // Kamus
    int i;
    int Tab[10]={1, 40, 6, 200, 3, 100, 30, 8, 99, 100};
    int X = 8; // index di mana Tab[max] bernilai max

    // Algoritma
    // Algoritma seq search paling sederhana
    // program berhenti pada index i dimana nilai detemukan
    i=0;
    while((Tab[i]!=X)&&(i<9)){
        i++;
    } // Tab[i]==x atau i==9;
    if(Tab[i]==X){
        printf("indeks bernilai X=%d",i);
    } else {
        printf("Nilai tidak ditemukan!");
    }
    return 0;
}
