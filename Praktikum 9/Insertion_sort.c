/* Nama file	: Insertion_sort.c */
/* Deskripsi 	: Program sorting dengan insertion sort */
/* Nama-Nim     : Della Shanda Anggrivani - 24060121120024 */
/* Tgl Pembuatan: Kamis, 5 Mei 2022 */

#include <stdio.h>

int main (){
    //kamus
    int i,Pass,Temp,N;
    int T[100];

    //algoritma
    printf("Program Insertion Sort\n");
    printf("Masukkan banyak elemen = ");
    scanf("%d",&N);
    /*Memasukkan elemen array*/
    for (i=1; i<=N; i++){
        printf("Masukkan bilangan ke %d = ",i);
        scanf("%d",&T[i]);
    }
    for (Pass=2; Pass<=N; Pass++){
        /*Simpan harga T[Pass] supaya tidak tertimpa karena pergeseran*/
        Temp = T[Pass];
        /*Sisipkan elemen ke Pass dalam T [1..Pass-1] sambil menggeser*/
        i = Pass-1;

        /*Cari i, Temp < T[i] && i>1*/
        while (Temp<T[i] && i>1){
            T[i+1] = T[i]; /*geser*/
            i = i-1;       /*berikutnya*/
        }

        /*Temp >= T[i] (tempat yang tepat) || i=1 (sisipkan sebagai element pertama)*/
        if (Temp>=T[i]){
            T[i+1] = Temp; /*menemukan tempat yang tepat*/
        }
        else{
            T[i+1] = T[i];
            T[i] = Temp; /*sebagai element pertama*/
        }
    }
    printf("Hasil pengurutan = "); /*terurut membesar*/
    for (i=1; i<=N; i++){
        printf("%d ",T[i]);
    }
    printf("\n");
    return 0;
}
