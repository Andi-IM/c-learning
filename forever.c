// File : forever.c
// Penulis : Andi Irham M (andi.irhamm@gmail.com)
// Deskripsi :
// Loop terus menerus, akan sering dipakai untuk program menunggu event
#include<stdio.h>
int main(){
    // Kamus

    // Program
    printf("Program akan loop, akhiri dengan ctrl+c");
    while(1) // atau for( ; ; )
    {
        printf("Tunggu ^c...\n");
        // program akan terus dijalankan, sampai diinterupsi
        // cara interupsi adalah dengan menekan [ctrl] dan tombol 'c' bersamaan
    }
    return 0;
}
