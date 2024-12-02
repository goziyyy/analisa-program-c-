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