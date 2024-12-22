
#include <stdio.h>
#include <string.h>

#define MAX_BUKU 100 // Maksimal jumlah buku yang bisa dimasukkan
#define MAX_STRING 100 // Panjang maksimal string (judul dan pengarang)

// Definisi struct Buku
struct Buku {
    char judul[MAX_STRING];
    char pengarang[MAX_STRING];
    int tahun;
};

void tambahBuku(struct Buku *perpustakaan, int *jumlahBuku);
void tampilkanBuku(struct Buku *perpustakaan, int jumlahBuku);
void cariBuku(struct Buku *perpustakaan, int jumlahBuku, char *judulCari);

int main() {
    struct Buku perpustakaan[MAX_BUKU]; // Array untuk menyimpan buku
    int jumlahBuku = 0; // Jumlah buku saat ini
    int pilihan;
    char judulCari[MAX_STRING];


do {
    // Menu utama
    printf("\n--- Manajemen Buku Perpustakaan ---\n");
    printf("1. Tambah Buku\n");
    printf("2. Tampilkan Semua Buku\n");
    printf("3. Cari Buku Berdasarkan Judul\n");
    printf("4. Keluar\n");
    printf("Pilihan Anda: ");
    scanf("%d", &pilihan);
    getchar(); // Membersihkan karakter newline dari buffer input

    switch (pilihan) {
        case 1:
            tambahBuku(perpustakaan, &jumlahBuku);
            break;
        case 2:
            tampilkanBuku(perpustakaan, jumlahBuku);
            break;
        case 3:
            printf("Masukkan judul buku yang ingin dicari: ");
            fgets(judulCari, MAX_STRING, stdin);
            judulCari[strcspn(judulCari, "\n")] = 0; // Menghapus karakter newline
            cariBuku(perpustakaan, jumlahBuku, judulCari);
            break;
        case 4:
            printf("Keluar dari program.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
    }
} while (pilihan != 4);

return 0;

}

// Fungsi untuk menambah buku
void tambahBuku(struct Buku *perpustakaan, int *jumlahBuku) {
    if (*jumlahBuku < MAX_BUKU) {
        printf("Masukkan judul buku: ");
        fgets(perpustakaan[*jumlahBuku].judul, MAX_STRING, stdin);
        perpustakaan[*jumlahBuku].judul[strcspn(perpustakaan[*jumlahBuku].judul, "\n")] = 0; // Menghapus newline

        printf("Masukkan pengarang buku: ");
        fgets(perpustakaan[*jumlahBuku].pengarang, MAX_STRING, stdin);
        perpustakaan[*jumlahBuku].pengarang[strcspn(perpustakaan[*jumlahBuku].pengarang, "\n")] = 0;

        printf("Masukkan tahun terbit: ");
        scanf("%d", &perpustakaan[*jumlahBuku].tahun);
        getchar(); // Membersihkan newline dari input

        (*jumlahBuku)++;
        printf("Buku berhasil ditambahkan!\n");
    } else {
        printf("Perpustakaan penuh, tidak bisa menambah buku lagi!\n");
    }
}

// Fungsi untuk menampilkan semua buku
void tampilkanBuku(struct Buku *perpustakaan, int jumlahBuku) {
    if (jumlahBuku == 0) {
        printf("Tidak ada buku di perpustakaan.\n");
    } else { 
        printf("\n... Daftar Buku di perpustakaan...\n");
        for (int i = 0; i < jumlahBuku; i++){
                printf("\n Buku ditemukan\n");
                printf("Judul       : %s\n", perpustakaan[i].judul);
                printf("Pengarang       : %s\n", perpustakaan[i].pengarang);
                printf("Tahun       : %s\n", perpustakaan[i].tahun);
              
            }
        }
    }

// Fungsi untuk mencari buku berdasarkan judul
void cariBuku(struct Buku *perpustakaan, int jumlahBuku, char *judulCari) {
    int ditemukan = 0;
    for (int i = 0; i < jumlahBuku; i++){
            if (strcmp(perpustakaan[i].judul, judulCari) == 0) {
                printf("\n Buku ditemukan\n");
                printf("Judul       : %s\n", perpustakaan[i].judul);
                printf("Pengarang       : %s\n", perpustakaan[i].pengarang);
                printf("Tahun       : %s\n", perpustakaan[i].tahun);
               ditemukan = 1;
               break;
            }
        }
        if (ditemukan) {
            printf(" Buku dengan judu; '%s' tidak ditemukan, \n", judulCari);
        }
    }