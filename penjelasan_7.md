# Penjelasan Skrip `7.cpp`

Skrip `7.cpp` adalah program C++ sederhana yang meminta pengguna memilih antara tombol 'Y' atau 'T' dan memberikan keterangan tentang pilihan tersebut. Berikut adalah penjelasan detail dari kode tersebut:

## Direktif Include
```cpp
#include <cstdlib>
#include <iostream>
#include <stdio.h>
```
Baris ini mengimpor header standar perpustakaan. `<cstdlib>` diimpor untuk fungsi `system`, `<iostream>` diimpor untuk operasi aliran input dan output, dan `<stdio.h>` diimpor untuk fungsi `printf` dan `getchar`.

## Penggunaan Namespace
```cpp
using namespace std;
```
Baris ini memungkinkan penggunaan fungsi perpustakaan standar tanpa mengawali dengan `std::`.

## Komentar
```cpp
// Untuk membaca tombol Y atau T
```
Komentar ini menjelaskan bahwa program ini membaca input tombol 'Y' atau 'T' dari pengguna.

## Fungsi Utama
```cpp
int main(int argc, char *argv[])
```
Ini adalah titik masuk program. Fungsi `main` mengembalikan bilangan bulat, biasanya `0` untuk menunjukkan eksekusi yang berhasil. Parameter `argc` dan `argv` digunakan untuk menangani argumen baris perintah, meskipun tidak digunakan dalam program ini.

## Deklarasi Variabel
```cpp
char pilihan;
int sudah_benar = 0;
```
Variabel `pilihan` dideklarasikan sebagai karakter untuk menyimpan input pengguna. Variabel `sudah_benar` dideklarasikan sebagai bilangan bulat dan diinisialisasi menjadi 0.

## Pesan ke Pengguna
```cpp
printf("Pilihlah Y atau T.\n");
```
Pesan ini meminta pengguna untuk memilih antara 'Y' atau 'T'.

## Perulangan While
```cpp
while (!sudah_benar) {
    pilihan = getchar(); // baca tombol
    sudah_benar = (pilihan == 'Y') || (pilihan == 'y') ||
                 (pilihan == 'T') || (pilihan == 't');
}
```
Perulangan ini terus berjalan sampai `sudah_benar` menjadi `true`. Di dalam perulangan, program membaca input pengguna menggunakan `getchar` dan memeriksa apakah input adalah 'Y', 'y', 'T', atau 't'. Jika ya, `sudah_benar` diatur menjadi `true` dan perulangan berhenti.

## Pernyataan Switch
```cpp
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
```
Pernyataan `switch` ini memberikan keterangan tentang pilihan pengguna berdasarkan nilai `pilihan`.

## Sistem Jeda
```cpp
system("PAUSE");
```
Baris ini menjeda eksekusi program dan menunggu pengguna menekan tombol. Perlu diingat bahwa `system("PAUSE")` khusus untuk Windows dan mungkin tidak berfungsi pada sistem operasi lain.

## Pernyataan Kembalian
```cpp
return EXIT_SUCCESS;
```
Baris ini mengembalikan `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang berhasil.

### Kode yang Diperbaiki
Berikut adalah versi kode yang diperbaiki:

```cpp
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
```

### Penjelasan Perbaikan
- Mengubah `EXITE_SUCCESS` menjadi `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang benar.
