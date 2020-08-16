/*File : initvar.c*/
/*Penulis : Andi Irham M (andi.irhamm@gmail.com)*/
/*Mengisi variabel yang bertipe integer dengan nilai 5 dan menuliskannya*/

#include<stdio.h>
int main(){
    /*KAMUS*/
    int i;
    /*ALGORITMA*/
    i = 5; /*Sekarang variabel i bernilai 5*/
    printf("Ini nilai i = %d.\n",i);

    i = i + 1; /*nilai i ditambah 1, hasilnya disimpan kembali di i*/
    printf("Ini nilai i = %d.\n",i);

    return 0;
}

