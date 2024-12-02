# Penjelasan Skrip `tiga.cpp`

Skrip `tiga.cpp` adalah program C++ sederhana yang menunjukkan perulangan menurun. Berikut adalah penjelasan detail dari kode tersebut:

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

## Pernyataan Output
```cpp
cout << "Perulangan Menurun" << endl;
```
Baris ini mencetak string "Perulangan Menurun" ke konsol, diikuti dengan baris baru.

## Perulangan For
```cpp
for (int j = 10; j > 0; j--)
```
Perulangan ini menginisialisasi `j` menjadi 10 dan mengurangi `j` dengan 1 pada setiap iterasi hingga `j` lebih besar dari 0.

## Badan Perulangan
```cpp
{ cout << j << endl; }
```
Di dalam perulangan, nilai saat ini dari `j` dicetak ke konsol, diikuti dengan baris baru.

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

int main()
{
    cout << "Perulangan Menurun" << endl;
    for (int j = 10; j > 0; j--)
    {
        cout << j << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Penjelasan Perbaikan
- Mengubah `EXITE_SUCCESS` menjadi `EXIT_SUCCESS` untuk menunjukkan penyelesaian program yang benar.
