/*Nama File     : TunjAnak.c*/
/*Deskripsi     : Menentukan besarnya tunjangan anak*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Selasa, 15-03-2022 22.00 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int ja,ta,gp;
    //algoritma
    printf("Program menghitung tunjangan anak \n");
    printf("Masukkan jumlah anak = ");
    scanf("%d",&ja);
    printf("Masukkan gaji pokok = ");
    scanf("%d",&gp);
    if (ja >=0 && gp >0) {
        if (ja < 3) {
            ta = ja*(0.1*gp);
            printf("Besarnya tunjangan adalah %d",ta);
        }
        else {
            ta = 3*(0.1*gp);
            printf("Besarnya tunjangan adalah %d",ta);
        }
    }
    else {
        printf("Masukan tidak boleh negatif");
    }
    return 0;
}
