// File : aritmatika.c
// Penulis : andi irham m (andi.irhamm@gmail.com)
// Operasi aritmatika bilangan integer dan bilangan riil;
// menuliskan jumlah, hasil perkalian, pembagian, modulo
// dua buah bilangan integer

#include<stdio.h>
int main(){
    // kamus
    int x= 5;
    int y=8;

    // program
    printf("ini nilai x+y : %d\n",x+y);
    printf("ini nilai x+x+x : %d\n",x+x+x);
    printf("ini nilai x-y : %d\n",x-y);
    printf("ini nilai x*y : %d\n",x*y);
    printf("ini nilai x*x+x : %d\n",x*x+x);
    printf("ini nilai x/y : %d\n",x/y);
    printf("ini nilai y/x : %d\n",y/x);
    printf("ini nilai x mod y : %d\n",x%y);

    // computational thinking
    // (((1+2)/(7*5)*8)-7)+9
    printf("(((1+2)/(7*5)*8)-7)+9 = %d\n",(((1+2)/(7*5)*8)-7)+9);

    // bandingkan dengan operasi pembagian bilangan riil
    float a=5, b=8;
    printf("Ini nilai a/b : %5.2f\n",a/b);
    printf("Ini nilai b/a : %5.2f\n",b/a);
    return 0;
}
