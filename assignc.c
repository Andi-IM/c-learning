/*Program : assignc.c*/
/*Penulis : Andi Irham M (andi.irhamm@gmail.com)*/
/* Deskripsi :
    program ini berisi contoh sederhana untuk mendefinisikan
    variabel bertipe karakter */
#include<stdio.h>
int main(){
    /*KAMUS*/
    char c = 65; /*Inisialisasi nilai karakter dengan 65, kode huruf 'A'*/
    char c1;
    /*ALGORITMA*/
    /*penulisan karakter sebagai huruf*/
    printf("Karakter = %c\n",c);
    c1 = 'Z'; /*variabel c1 diisi dengan huruf 'Z'*/
    printf("Karakter = %c\n",c1);

    // penulisan karakter
    printf("Karakter dalam ascii = %d\n",c);
    printf("Karakter sebagai huruf = %c\n",c);
    printf("Karakter dalam ascii = %d\n",c1);
    printf("Karakter sebagai huruf = %c\n",c1);

    return 0;
}
