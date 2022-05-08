/* Nama file	: Selection_sort.c */
/* Deskripsi 	: Program sorting dengan selection sort */
/* Nama-Nim     : Della Shanda Anggrivani - 24060121120024 */
/* Tgl Pembuatan: Kamis, 5 Mei 2022 */

#include <stdio.h>

/*sub program*/
int selectionSort(int T[], int N){
  //kamus
  int i,j,posisi,swap;

  //algoritma
  for(i=0; i<(N-1); i++){
    posisi = i;
    for (j = i+1; j<N; j++){
      if(T[posisi] > T[j]){
        posisi = j;
      }
    }
    if(posisi != i){
      swap = T[i];
      T[i] = T[posisi];
      T[posisi] = swap;
    }
  }
}

/*program utama*/
int main(){
  //kamus
  int T[100], N, i, j;

  //algoritma
  printf("Program Selection Sort\n");
  printf("Masukkan banyak elemen: ");
  scanf("%d", &N);

  /*Memasukkan elemen array*/
  for (i=0; i<N; i++){
    printf("Masukkan bilangan ke %d = ",i);
    scanf("%d",&T[i]);
  }
  selectionSort(T, N);

  printf("Hasil pengurutan : "); /*terurut membesar*/
  for(i = 0; i<N; i++){
    printf("%d ",T[i]);
  }
  printf("\n");
  return 0;
}
