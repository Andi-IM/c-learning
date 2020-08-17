// File : inkremen.c
// Penulis : andi.irhamm@gmail.com
// Deskripsi :
// Efek dari operator ++

#include<stdio.h>
int main(){
    // Kamus
    int i;

    // Program
    i = 3;
    printf("Nilai i :%d %d\n",i,i++);
    i = 3;
    printf("%d\n",++i); // Sebelum dicetak, nilai i ditambah 1

    i = 3;
    printf("Nilai i :%d %d\n",i,i--);
    i = 3;
    printf("%d\n",--i); // Sebelum dicetak, nilai i dikurang 1
    return 0;
}
