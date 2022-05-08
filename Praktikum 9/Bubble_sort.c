/* Nama file	: Bubble_sort.c */
/* Deskripsi 	: Program sorting dengan bubble sort */
/* Nama-Nim     : Della Shanda Anggrivani - 24060121120024 */
/* Tgl Pembuatan: Kamis, 5 Mei 2022 */

#include <stdio.h>

/*sub program*/
void bubbleSort(int T[], int N){
  //kamus
  int i, j, tmp;

  //algoritma
  for(i = 0; i < N; i++){
    for(j=0; j < N-i-1; j ++){
      if(T[j] > T[j+1]){
        tmp = T[j]; /*Memorisasi pertukaran*/
        T[j] = T[j+1]; /*Menukarkan element  dengan element selanjutnya jika sifat dipenuhi*/
        T[j+1] = tmp; /*Menempatkan hasil dari memorisasi*/
      }
    }
  }
}

/*program utama*/
int main() {
  //kamus
  int T[100], N, i, j;

  //algoritma
  printf("Program Bubble Sort\n");
  printf("Masukkan banyak elemen: ");
  scanf("%d", &N);

  /*memasukkan element array*/
  for (i=0; i<N; i++){
    printf("Masukkan bilangan ke %d = ",i);
    scanf("%d",&T[i]);
  }

  bubbleSort(T, N);
  printf("Hasil pengurutan : "); /*terurut membesar*/
  for(i = 0; i < N; i++){
    printf("%d ", T[i]);
  }
  printf("\n");
  return 0;
}
