// File : for.c
// Penulis : Andi Irham M (andi.irhamm@gmail.com)
// Deskripsi :
// Print "Saya senang" sebanyak 3 kali
#include<stdio.h>
int main(){
    // Kamus :
    int i;
    int n;
    printf("Mau sebanyak berapa kali dilakukan print? ");
    scanf("%d",&n);
    // Algoritma
    for(i=0;i<n;i++){
        printf("Saya senang belajar bahasa C \n");
    }
    return 0;
}
