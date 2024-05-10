#include <stdio.h>
#include <stdlib.h>

int main() {
    int multiplosTres;

    printf("Múltiplos de três:\n");

    for (multiplosTres = 2; multiplosTres <= 100; multiplosTres += 1) {
        if (multiplosTres%3 == 0) {
            printf("%d\n", multiplosTres);
        }
    }

    return 0;
}