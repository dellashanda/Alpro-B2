/*Nama File     : CekSempurna.c*/
/*Deskripsi     : Menentukan bilangan sempurna*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Rabu, 25-03-2022 11.30 WIB*/

#include <stdio.h>

int main() {
    //kamus
    int N,i,h=0;
    //algoritma
    printf("Program Menentukan Bilangan Sempurna \n");
    printf("Masukkan bilangan = ");
    scanf("%d",&N);
    if (N<0) {
        printf("Masukan harus positif");
    }
    else {
        for(i=1; i<N; i++){
            if (N%i == 0) {
                h = h+i;
                }
            }
        if (h==N) {
            printf("%d merupakan bilangan sempurna",N);
        }
        else {
            printf("%d bukan merupakan bilangan sempurna",N);
        }
        }
    return 0;
}
