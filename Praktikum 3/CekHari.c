/*Nama File     : CekHari.c*/
/*Deskripsi     : Menentukan nama hari berdasarkan nomor hari*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 09-03-2022 18.50 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int H;
    //algoritma
    printf("Program nama-nama hari dari nomor hari \n");
    printf("Masukkan nomor hari = ");
    scanf("%d",&H);
    if (H >= 1 && H <= 7){
        if(H==1) {
            printf("Hari ke %d adalah hari Senin",H);
        }
        else if(H==2) {
            printf("Hari ke %d adalah hari Selasa",H);
        }
        else if(H==3) {
            printf("Hari ke %d adalah hari Rabu",H);
        }
        else if(H==4) {
            printf("Hari ke %d adalah hari Kamis",H);
        }
        else if(H==5) {
            printf("Hari ke %d adalah hari Jumat",H);
        }
        else if(H==6) {
            printf("Hari ke %d adalah hari Sabtu",H);
        }
        else if(H==7) {
            printf("Hari ke %d adalah hari Minggu",H);
        }
    }
    else {
        printf("Masukan nomor hari tidak tepat",H);
    }
    return 0;
}
