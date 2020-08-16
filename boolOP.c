// File : boolOP.c
// Penulis : andi irham m (andi.irhamm@gmail.com)
// Deskripsi :
// Contoh perhitungan aljabar boolean, perhatikan cara penulisan AND
// dan OR serta NOT.

#include<stdio.h>
typedef int bool;
enum {F, T};
int main(){
    // kamus
    int TRUE = 1;
    int FALSE = 0;
    // algoritma
    printf("Ini nilai TRUE AND TRUE : %d\n",TRUE && TRUE);
    printf("Ini nilai TRUE OR FALSE : %d\n",TRUE || FALSE);
    printf("Ini nilai FALSE AND TRUE : %d\n", FALSE && TRUE);
    printf("Ini nilai FALSE OR TRUE : %d\n", FALSE || TRUE);
    printf("ini nilai NOT TRUE : %d\n",!TRUE);
    printf("Ini nilai NOT FALSE : %d\n",!FALSE);

    printf("-------\n");
    printf("OR T F \n");
    printf("T %d %d\n",TRUE || TRUE, FALSE || TRUE);
    printf("F %d %d\n",FALSE || TRUE, FALSE || FALSE);
    printf("-------\n");

    printf("-------\n");
    printf("AND T F \n");
    printf("T %d %d\n",TRUE && TRUE, FALSE && TRUE);
    printf("F %d %d\n",FALSE && TRUE, FALSE && FALSE);
    printf("-------\n");

    printf("-------\n");
    printf("NOT T F \n");
    printf(" %d %d\n",!TRUE, !FALSE);
    printf("-------\n");

    return 0;
}
