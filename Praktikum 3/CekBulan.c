/*Nama File     : CekBulan.c*/
/*Deskripsi     : Menentukan nama bulan berdasarkan nomor bulan*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 09-03-2022 18.10 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int B;
    //algoritma
    printf("Program nama-nama bulan dari nomor bulan \n");
    printf("Masukkan nomor bulan = ");
    scanf("%d",&B);
    if (B >= 1 && B <= 12) {
        if (B==1) {
            printf("Bulan ke %d adalah bulan Januari",B);
        }
        else if (B==2) {
            printf("Bulan ke %d adalah bulan Februari",B);
        }
        else if (B==3) {
            printf("Bulan ke %d adalah bulan Maret",B);
        }
        else if (B==4) {
            printf("Bulan ke %d adalah bulan April",B);
        }
        else if (B==5) {
            printf("Bulan ke %d adalah bulan Mei",B);
        }
        else if (B==6) {
            printf("Bulan ke %d adalah bulan Juni",B);
        }
        else if (B==7) {
            printf("Bulan ke %d adalah bulan Juli",B);
        }
        else if (B==8) {
            printf("Bulan ke %d adalah bulan Agustus",B);
        }
        else if (B==9) {
            printf("Bulan ke %d adalah bulan September",B);
        }
        else if (B==10) {
            printf("Bulan ke %d adalah bulan Oktober",B);
        }
        else if (B==11) {
            printf("Bulan ke %d adalah bulan November",B);
        }
        else if (B==12) {
            printf("Bulan ke %d adalah bulan Desember",B);
        }
    }
    else {
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
