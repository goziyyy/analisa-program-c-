#include <cstdlib>
#include <iostream>
#include <stdio.h>

// Untuk membaca tombol Y atau T
using namespace std;

int main(int argc, char *argv[]) {
    char pilihan;

    /* diberi nilai salah lebih dahulu */
    int sudah_benar = 0;

    printf("Pilihlah Y atau T.\n");

    /* program dilanjutkan jika tombol Y,y,T atau t ditekan */
    while (!sudah_benar) {
        pilihan = getchar(); // baca tombol
        sudah_benar = (pilihan == 'Y') || (pilihan == 'y') ||
                     (pilihan == 'T') || (pilihan == 't');
    }

    /* memberi keterangan tentang pilihan */
    switch (pilihan) {
        case 'Y':
        case 'y':
            puts("Pilihan anda adalah Y");
            break;
        case 'T':
        case 't':
            puts("Pilihan anda adalah T");
            break;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}