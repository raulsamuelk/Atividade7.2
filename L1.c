#include <stdio.h>
#include <math.h>

struct ponto {
    double x, y;
};

int main(void) {
    struct ponto a, b;

    printf("Digite as coordenadas do ponto A: ");
    scanf("%lf %lf", &a.x, &a.y);

    printf("Digite as coordenadas do ponto B: ");
    scanf("%lf %lf", &b.x, &b.y);

    double distancia = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));

    printf("Distancia = %.2f\n", distancia);

    return 0;
}