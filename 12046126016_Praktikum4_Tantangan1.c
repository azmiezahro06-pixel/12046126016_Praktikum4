/*
 * Program      : Cetak Tabel Perkalian
 * Nama         : Azmie Sakinatu Zahro
 * NIM          : 12046126016
 * Deskripsi    : Nested for loop untuk mencetak tabel perkalian N x N
 */

#include <stdio.h>

int main() {
    int N;

    printf("=== CETAK TABEL PERKALIAN ===\n");
    printf("Masukkan nilai N (1-10): ");
    scanf("%d", &N);

    if (N < 1 || N > 10) {
        printf("N harus berada di antara 1 sampai 10.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}