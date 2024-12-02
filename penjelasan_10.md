# Penjelasan Skrip `10.cpp`

Skrip `10.cpp` adalah program C++ sederhana yang meminta pengguna memasukkan kalimat dan menunggu hingga pengguna menekan tombol ENTER. Berikut adalah penjelasan detail dari kode tersebut:

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

## Fungsi Utama
```cpp
int main()
```
Ini adalah titik masuk program. Fungsi `main` mengembalikan bilangan bulat, biasanya `0` untuk menunjukkan eksekusi yang berhasil.

## Deklarasi Variabel
```cpp
char kar;
```
Variabel `kar` dideklarasikan sebagai karakter untuk menyimpan input pengguna.

## Pesan ke Pengguna
```cpp
printf("Ketik sembarang kalimat\n");
printf("dan akhiri dengan ENTER\n\n");
```
Pesan ini meminta pengguna untuk mengetik kalimat apa pun dan mengakhirinya dengan menekan tombol ENTER.

## Perulangan For
```cpp
for (;;) {
    kar = getchar();
    if (kar == '\n') {
        break;
    }
}
```
Perulangan ini terus berjalan sampai pengguna menekan tombol ENTER (`\n`). Di dalam perulangan, program membaca input pengguna menggunakan `getchar`. Jika input adalah tombol ENTER, perulangan berhenti.

## Pesan Penutup
```cpp
printf("**** Selesai. Terima kasih ****\n");
```
Pesan ini muncul setelah pengguna menekan tombol ENTER, menunjukkan bahwa program selesai.

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

using namespace std;

int main() {
    char kar;

    printf("Ketik sembarang kalimat\n");
    printf("dan akhiri dengan ENTER\n\n");

    for (;;) {
        kar = getchar();
        if (kar == '\n') {
            break;
        }
    }

    printf("**** Selesai. Terima kasih ****\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Penjelasan Perbaikan
- Mengubah `EXITE_SUCCESS` menjadi `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang benar.
