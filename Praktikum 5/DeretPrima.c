/*Nama File     : DeretPrima.c*/
/*Deskripsi     : Menentukan deret bilangan prima*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 25-03-2022 11.50 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int N,i,h,j;
    //algoritma
    printf("Program Menentukan Deret Bilangan Prima \n");
    printf("Masukkan bilangan = ");
    scanf("%d",&N);
    printf("Deret bilangan prima adalah");
    if (N<0) {
        printf("Masukan harus positif");
    }
    else {
        for (i=1; i<=N; i++) {
            for (j=1; j<=i; j++) {
            if(i%j == 0) {
                h++;
            }
        }
    if (h==2) printf(" |%d",i);
    h=0;
        }
    }
    return 0;
}
