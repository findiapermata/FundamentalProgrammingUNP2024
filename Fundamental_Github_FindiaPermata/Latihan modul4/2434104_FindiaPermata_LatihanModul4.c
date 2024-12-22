#include <stdio.h>
#include <stdlib.h>

//jalankan program ini menggunakan pauser konsol atau tambahkan getch, sistem ("pause") atau loop//
int main(int argc, char *argv[]){

    printf("MODUL4.c \n");
    printf("=====================================\n");
    printf("Nama  : Findia Permata \n");
    printf("NIM   : 24343104 \n");
    printf("=====================================\n");
    printf("\n");

    int bilangan, sisaBagi;

    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    sisaBagi = bilangan % 2;

    if(sisaBagi == 0){
        printf("Bilangan %d merupakan bilangan genap.", bilangan);
    } else{
        printf("Bilangan %d merupakan bilangan ganjil.", bilangan);
    }
}