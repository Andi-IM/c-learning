// File : maxsort.c
// Penulis : andi irham m (andi.irhamm@gmail.com)
// Deskripsi :
// Mengurutkan elemen tabel dengan metoda max sort
#include<stdio.h>
int main(){
    // Kamus
    int i;
    int Tab[10]={1,50,6,200,3,100,30,8,99,100};
    int max; // index dimana Tab[max] bernilai max
    int k, temp; // variabel kerja
    // Algoritma
    for(i=0;i<9;i++){
        max = i;
        for(k=i+1;k<10;k++){
            if(Tab[k]>Tab[max]){
                max = k;
            }
        }
        // Tukar nilai Tab[max] dengan tab[i]
    temp = Tab[i];
    Tab[i] = Tab[max];
    Tab[max] = temp;
    }

    for(i=0;i<10;i++){
        printf("%d; \t",Tab[i]);
    }
    return 0;
}
