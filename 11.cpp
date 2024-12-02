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