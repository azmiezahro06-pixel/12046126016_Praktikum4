/*
 * Program      : Mencetak Pola Segitiga Bintang
 * Nama         : Azmie Sakinatu Zahro 
 * NIM          : 12046126016
 * Deskripsi    : Nested for loop untuk pola segitiga bintang 
 */

#include <stdio.h>
int main() {
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukan jumlah baris: ");
    scanf("%d", &N);

    for (int i= 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("ʚɞ");
        }
        printf("\n");
    }
    return 0;
}