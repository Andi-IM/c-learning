// File : bacaTabelc
// Penulis : Andi irham m (andi.irhamm@gmail.com)
// Deksripsi :
// Mendefinisikan Array dan mengisi nilainya dari input yang dibaca
#include<stdio.h>
int main(){
    // Kamus
    int Tab[5];
    int i;
    // Algoritma
    // baca isi Tab
    for(i=0;i<5;i++){
        scanf("%d",&Tab[i]);
    }

    // Menuliskan isi Tab berderet ke kanan
    for(i=0;i<5;i++){
        printf("Tab[%d]=%d; \t",i,Tab[i]);
    }
    printf("\n");
}
