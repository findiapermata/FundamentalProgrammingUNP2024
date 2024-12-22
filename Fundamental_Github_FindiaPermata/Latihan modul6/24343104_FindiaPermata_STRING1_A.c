#include <stdio.h>
#include <string.h>
//Deklarasi Fungsi
int hitungPanjangString(char string []);
void judul();
int main (){

    judul();
    char string [20];

    printf("Masukkan String Yang Akan Di Hitung:");
    scanf("%s", string);

    int panjangString=hitungPanjangString(string);
    printf("Jumlah Karakter Dalam String Adalah: %d\n",panjangString );
    return 0;
}
int hitungPanjangString(char string []){
    return strlen(string);
}
void judul(){
    printf("===============================================\n");
    printf("|            Menhitung Panjang String         |\n");
    printf("|---------------------------------------------|\n");
    printf("| PROGRAMMER : Findia Permata          |\n");
    printf("| NIM        : 24343104                     |\n");
    printf("===============================================\n");

}