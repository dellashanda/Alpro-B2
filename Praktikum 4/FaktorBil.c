/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Menentukan faktor bilangan*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 15-03-2022 06.55 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int i,N;
    //algoritma
    printf("Program menentukan faktor bilangan \n");
    printf("Masukkan N = ");
    scanf("%d",&N);

    i = 1;
    for (i = 1; i <= N; i++) {
        if (N % i == 0){
            printf("| %d",i);
        }
    }
    return 0;
}


