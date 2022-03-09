/*Nama File     : CekProsesBil.c*/
/*Deskripsi     : Melakukan klasifikasi pada bilangan*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 09-03-2022 18.25 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int N;

    //algoritma
    printf("Program Cek Proses Bilangan \n");
    printf("Masukkan bilangan = ");
    scanf("%d",&N);
    if (N%2==0) {
        N = N+3;
        if (N%5==0) {
            N = N+5;
            printf("Maka hasilnya adalah %d",N);
        }
        else {
            N = N+2;
            printf("Maka hasilnya adalah %d",N);
        }
    }
    else {
        N = N+2;
        if (N%3==0) {
            N = N+4;
            printf("Maka hasilnya adalah %d",N);
        }
        else {
            N = N+1;
            printf("Maka hasilnya adalah %d",N);
        }
    }
    return 0;
}
