#include <stdio.h>

void mostrarParesMultiplosDeTres() {
    for (int i = 2; i <= 100; i += 2) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    } 
}

int main(void) {
    mostrarParesMultiplosDeTres();
    return 0;
}