#include <stdio.h>

int casos, numero, decimal[100], x, y, contador;

int main() {
    scanf("%d", &casos);

    for (x = 0; x < casos; x++) {
        scanf("%d", &numero);

        if (numero > 0 && numero < 10000) {
            contador = 0;

            for (y = 0; y < numero; y++) {
                scanf("%d", &decimal[y]);

                if (decimal[y] % 2 == 0 && contador < numero) {
                    contador++;
                    printf("%d", decimal[y]);

                    if (contador < numero) {
                        printf(" "); // Add a space between even digits
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}

