/*Nama File     : CekBilSemb.c*/
/*Deskripsi     : Menentukan sebuah inputan termasuk bilangan bulat positif, nol, atau bulat negatif*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 09-03-2022 18.40 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int i;
    //algoritma
    printf("Program mengecek sebuah bilangan \n");
    printf("Masukkan nilai i = ");
    if (scanf("%d",&i)) {
        if (i==0) {
            printf("Bilangan %d adalah nol",i);
        }
        else if (i > 0) {
            printf("Bilangan %d adalah bilangan bulat positif",i);
        }
        else if (i < 0) {
            printf("Bilangan %d1 adalah bilangan bulat negatif",i);
        }
    }
    else {
        printf("Bukan termasuk sebuah bilangan",i);
    }
    return 0;
}
