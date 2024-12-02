# Penjelasan Skrip `6.cpp`

Skrip `6.cpp` adalah program C++ sederhana yang menunjukkan penggunaan perulangan `for` untuk membuat deret bilangan yang naik dengan increment 10. Berikut adalah penjelasan detail dari kode tersebut:

## Direktif Include
```cpp
#include <cstdlib>
#include <iostream>
#include <stdio.h>
```
Baris ini mengimpor header standar perpustakaan. `<cstdlib>` diimpor untuk fungsi `system`, `<iostream>` diimpor untuk operasi aliran input dan output, dan `<stdio.h>` diimpor untuk fungsi `printf`.

## Penggunaan Namespace
```cpp
using namespace std;
```
Baris ini memungkinkan penggunaan fungsi perpustakaan standar tanpa mengawali dengan `std::`.

## Komentar
```cpp
// Contoh pemakaian for untuk membentuk deret naik
```
Komentar ini menjelaskan bahwa program ini menggunakan perulangan `for` untuk membuat deret bilangan yang naik.

## Fungsi Utama
```cpp
int main()
```
Ini adalah titik masuk program. Fungsi `main` mengembalikan bilangan bulat, biasanya `0` untuk menunjukkan eksekusi yang berhasil.

## Deklarasi Variabel
```cpp
int bilangan;
```
Variabel `bilangan` dideklarasikan sebagai bilangan bulat.

## Perulangan For
```cpp
for (bilangan = 20; bilangan <= 100; bilangan += 10)
```
Perulangan ini menginisialisasi `bilangan` menjadi 20 dan menambahkan `bilangan` dengan 10 pada setiap iterasi hingga `bilangan` kurang dari atau sama dengan 100.

## Pencetakan Bilangan
```cpp
printf("%d\n", bilangan);
```
Di dalam perulangan, nilai `bilangan` dicetak ke konsol menggunakan fungsi `printf`.

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

// Contoh pemakaian for untuk membentuk deret naik
using namespace std;

int main() {
    int bilangan;
    for (bilangan = 20; bilangan <= 100; bilangan += 10) {
        printf("%d\n", bilangan);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Penjelasan Perbaikan
- Mengubah `EXITE_SUCCESS` menjadi `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang benar.
