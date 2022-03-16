/*Nama File     : TarifPLN.c*/
/*Deskripsi     : Menentukan besarnya tarif listrik yang dikenakan */
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Selasa, 15-03-2022 22.12 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int gol,d,ta;
    //algoritma
    printf("Program menghitung tarif listrik \n");
    printf("Masukkan pemakaian daya = ");
    scanf("%d",&d);
    printf("Masukkan golongan = ");
    scanf("%d",&gol);
    if (d < 100) {
        if (gol==1) {
            ta = 100*1000;
            printf("Besarnya tarif adalah %d",ta);
        }
        else if (gol==2) {
            ta = 100*2000;
            printf("Besarnya tarif adalah %d",ta);
        }
    }
    else if (d > 100 && d < 1000) {
        if (gol==1) {
            ta = d*1000;
            printf("Besarnya tarif adalah %d",ta);
        }
        else if (gol==2) {
            ta = d*2000;
            printf("Besarnya tarif adalah %d",ta);
        }
    }
    else {
        if (gol==1) {
            ta = d*1000;
            ta = ta + (0.1*ta);
            printf("Besarnya tarif adalah %d",ta);
        }
        else if (gol==2) {
            ta = d*2000;
            ta = ta + (0.1*ta);
            printf("Besarnya tarif adalah %d",ta);
        }
    }
    return 0;
}
