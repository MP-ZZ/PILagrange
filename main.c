#include <stdio.h>
#include "libpilagrange.h"

int main(){
   float x[100], y[100], xp, yp;
    int i, n;


    printf("Ingrese el número de datos: ");
    scanf("%d", &n);

    printf("Ingrese los datos:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    printf("Ingrese el punto de interpolación: ");
    scanf("%f", &xp);

    lagrange(x, y, n, xp, &yp);

    printf("El valor interpolado en %.3f es %.3f.", xp, yp);

    getchar();
    return 0;
}
