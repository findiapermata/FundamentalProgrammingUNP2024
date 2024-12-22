#include<stdio.h>

//Fungsi untuk menghitung luas persegi panjang
int hitungLuasPersegiPanjang(int panjang, int lebar)
{
    return panjang * lebar;
}

int main ()
{
    printf(" \t Luas Persegi Panjang\n");
    printf("\t=======================\n");
    printf("Nama    : Findia Permata\n");
    printf("NIM     : 24343104\n");
   
    int panjang, lebar;
    printf("Masukkan panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar : ");
    scanf("%d", &lebar);

   
    // memanggi; fungsi dan menampilkan hasil
    int luas = hitungLuasPersegiPanjang(panjang, lebar);
    printf("Luas persegi panjang adalah : %d\n", luas );

    return 0;
}