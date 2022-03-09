/*Nama File     : CekSeriPositif.c*/
/*Deskripsi     : Menghitung total tahanan rangkaian seri*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 09-03-2022 19.30 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int R1,R2,R3,Rt;

    //algoritma
    printf("Program menghitung total tahanan rangkaian seri \n");
    printf("Masukkan nilai R1 = ");
    scanf("%d",&R1);
    printf("Masukkan nilai R2 = ");
    scanf("%d",&R2);
    printf("Masukkan nilai R3 = ");
    scanf("%d",&R3);
    if (R1 >= 0 && R2 >=0 && R3 >=0) {
        Rt = R1 + R2 + R3;
        printf("Maka total tahanan adalah %d",Rt);
    }
    else {
        printf("Masukkan tahanan tidak boleh negatif");
    }
    return 0;
}
