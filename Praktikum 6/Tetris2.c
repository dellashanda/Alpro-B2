/*Nama File     : Tetris2.c*/
/*Deskripsi     : Membuat tetris*/
/*Pembuat       : Della Shanda Anggrivani - 24060121120024*/
/*Tgl Pembuatan : Senin, 28-03-2022*/

#include <stdio.h>

int main() {
    //kamus
    int N,i,j;
    char b;
    //algoritma
    printf("Program Membuat Tetris \n");
    printf("Masukkan bilangan = ");
    scanf("%d",&N);
    if (N<=0){
        printf("Masukan harus positif");
    }
    else {
        for (i=0; i<=N; i++){
            for (j=0; j<i; j++){
                printf("*");
            }
            printf("\n");
        }
        for (i=N-1; i>=1; i--){
            for (j=i; j>=1; j--){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
