# Penjelasan Skrip `11.cpp`

Skrip `11.cpp` adalah program C++ sederhana yang menampilkan bilangan ganjil antara 7 dan 25, kecuali bilangan 15. Berikut adalah penjelasan detail dari kode tersebut:

## Direktif Include
```cpp
#include <cstdlib>
#include <iostream>
#include <stdio.h>
```
Baris ini mengimpor header standar perpustakaan. `<cstdlib>` diimpor untuk fungsi `system`, `<iostream>` diimpor untuk operasi aliran input dan output, dan `<stdio.h>` diimpor untuk fungsi `printf`.

## Komentar
```cpp
// File program: ganjil.c
// Menampilkan bilangan ganjil antara 7 - 25 kecuali 15
```
Komentar ini menjelaskan bahwa program ini menampilkan bilangan ganjil antara 7 dan 25, kecuali bilangan 15.

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
int x;
```
Variabel `x` dideklarasikan sebagai bilangan bulat untuk digunakan dalam perulangan.

## Perulangan For
```cpp
for (x = 7; x <= 25; x += 2)
```
Perulangan ini menginisialisasi `x` menjadi 7 dan menambahkan `x` dengan 2 pada setiap iterasi hingga `x` kurang dari atau sama dengan 25.

## Pernyataan If dan Continue
```cpp
if (x == 15) {
    continue;
}
```
Jika `x` sama dengan 15, pernyataan `continue` akan membuat perulangan melanjutkan ke iterasi berikutnya tanpa menjalankan kode di bawahnya.

## Pencetakan Bilangan Ganjil
```cpp
printf("%4d", x);
```
Di dalam perulangan, nilai `x` dicetak ke konsol dengan format 4 digit.

## Pencetakan Baris Baru
```cpp
printf("\n");
```
Setelah perulangan selesai, baris baru dicetak ke konsol.

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

// File program: ganjil.c
// Menampilkan bilangan ganjil antara 7 - 25 kecuali 15

using namespace std;

int main() {
    int x;

    for (x = 7; x <= 25; x += 2) {
        if (x == 15) {
            continue;
        }
        printf("%4d", x);
    }

    printf("\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Penjelasan Perbaikan
- Mengubah `EXITE_SUCCESS` menjadi `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang benar.
