// File : bacaNum.c
// Penulis : And irham m (andi.irhamm@gmail.com)
// Deskripsi :
// Contoh membaca numerik : bilangan bulat, bilangan riil
// kemudian menuliskan nilai ke yang dibaca

#include<stdio.h>
int main(){
    // Kamus
    int a;
    float x;
    // Program
    printf("Contoh membaca dan menulis, ketik nilai integer: ");
    scanf("%d",&a); // membaca nilai a yang bertipe integer
                    // perhatikan bahwa nama variabel ditulis dg &a
    printf("Nilai yang dibaca: %d\n",a);

    printf("ketik nilai sebuah bilangan riil: ");
    // scanf("%d",&a); // membaca nilai a yang bertipe integer
    scanf("%f",&x); // membaca nilai x yang bertipe riil
    printf("Nilai yang dibaca: %f \n",x);

    // coba ketik : scanf("%d",a); dan tuliskan nilainya. Apa akibatnya?
    // coba ketik : scanf("%f",x); dan tuliskan nilainya. Apa akibatnya?

    return 0;
}
