// File : IF1.c
// Penulis : andi irham m (andi.irhamm@gmail.com)
// Deskripsi
// contoh pemakaian IF satu kasus
// membaca nilai integer, menuliskan nilainya jika positif

#include<stdio.h>
int main(){
    // Kamus
    int a;
    // Program
    printf("Contoh IF satu kasus \n");
    printf("Ketikkan suatu niali integer ");
    scanf("%d", &a);
    if(a >= 0){
        printf("Nilai a positif %d \n", a);
    }
    // jika nilai a tidak positif maka program tidak melakukan apapun
    return 0;
}
