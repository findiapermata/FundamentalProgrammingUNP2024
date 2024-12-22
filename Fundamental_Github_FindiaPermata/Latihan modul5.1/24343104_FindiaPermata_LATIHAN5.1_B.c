#include <stdio.h>

// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari)
{
    return 2 * 3.14 * jariJari;
}

int main()
{
    printf(" \t Keliling Lingkaran\n");
    printf("\t=======================\n");
    printf("Nama    : Findia Permata\n");
    printf("NIM     : 24343104\n");

    float jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi dan menampilkan hasil
    float keliling = hitungKelilingLingkaran(jariJari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}

