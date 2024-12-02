# Penjelasan Skrip `5.cpp`

Skrip `5.cpp` adalah program C++ sederhana yang menunjukkan penggunaan perulangan bersarang untuk membuat pola segitiga siku-siku terbalik menggunakan karakter `*`. Berikut adalah penjelasan detail dari kode tersebut:

## Direktif Include
```cpp
#include <cstdlib>
#include <iostream>
```
Baris ini mengimpor header standar perpustakaan. `<cstdlib>` diimpor untuk fungsi `system`, dan `<iostream>` diimpor untuk operasi aliran input dan output.

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

## Perulangan For Luar
```cpp
for (int i = 10; i > 0; i--)
```
Perulangan ini menginisialisasi `i` menjadi 10 dan mengurangi `i` dengan 1 pada setiap iterasi hingga `i` lebih besar dari 0.

## Perulangan For Dalam
```cpp
for (int j = 0; j <= i; j++)
```
Perulangan ini menginisialisasi `j` menjadi 0 dan menambahkan `j` dengan 1 pada setiap iterasi hingga `j` kurang dari atau sama dengan `i`.

## Pencetakan Karakter `*`
```cpp
cout << '*';
```
Di dalam perulangan dalam, karakter `*` dicetak ke konsol.

## Pencetakan Baris Baru
```cpp
cout << endl;
```
Setelah perulangan dalam selesai, baris baru dicetak ke konsol.

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

using namespace std;

int main() {
    for (int i = 10; i > 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Penjelasan Perbaikan
- Mengubah `EXITE_SUCCESS` menjadi `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang benar.
