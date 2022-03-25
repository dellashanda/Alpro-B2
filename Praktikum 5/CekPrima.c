/*Nama File     : CekPrima.c*/
/*Deskripsi     : Menentukan bilangan prima*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 25-03-2022 11.00 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int i,N,h;
    //algoritma
    printf("Program Menentukan Bilangan Prima \n");
    printf("Masukkan bilangan = ");
    scanf("%d",&N);
    if (N<0) {
        printf("Masukan harus positif");
    }
    else {
        for (i=2; i<N; i++) {
            if(N%i == 0) {
                h=0;
                break;
            }
            else {
                h=1;
            }
        }
        if(h==0) {
            printf("%d bukan merupakan bilangan prima",N);
        }
        else {
            printf("%d merupakan bilangan prima",N);
        }
    }
    return 0;
}
