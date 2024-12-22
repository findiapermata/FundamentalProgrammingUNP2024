#include <stdio.h>
#include <string.h>

// definisi tipe struct secara global
struct tanggal {
    int hari, bulan, tahun;
};

struct mahasiswa {
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

// deklarasi variabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

int main() {
    // mengisi data kedalam variabel struct data_mahasiswa
    strcpy(data_mahasiswa.nama, "Findia Permata");
    data_mahasiswa.nim = 24343104;
    data_mahasiswa.tanggal_lahir.hari = 12;
    data_mahasiswa.tanggal_lahir.bulan = 04;
    data_mahasiswa.tanggal_lahir.tahun = 2005;

    // menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
    printf("Nomor Induk Mahasiswa: %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir: %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari, 
           data_mahasiswa.tanggal_lahir.bulan, data_mahasiswa.tanggal_lahir.tahun);
    
    return 0;
}
