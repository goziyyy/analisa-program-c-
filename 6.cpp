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