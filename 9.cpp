#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char pilihan;
    bool sudah_benar = false;

    printf("Pilihlah Y atau T.\n");

    // Program dilanjutkan kalau tombol Y, y, T atau t ditekan
    do {
        pilihan = getchar(); // Baca tombol
        sudah_benar = (pilihan == 'Y') || (pilihan == 'y') ||
                     (pilihan == 'T') || (pilihan == 't');
    } while (!sudah_benar);

    // Memberi keterangan tentang pilihan
    switch (pilihan) {
        case 'Y':
        case 'y':
            puts("Pilihan anda adalah Y");
            break;
        case 'T':
        case 't':
            puts("Pilihan anda adalah T");
            break;
        default:
            puts("Pilihan tidak valid.");
            break;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}