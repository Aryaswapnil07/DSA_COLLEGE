#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0) {
        // Two real and different roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // Two real and same roots
        root1 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
