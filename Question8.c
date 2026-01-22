#include <stdio.h>
#include <math.h>

int main() {
    double x = 0.50;
    double target_error = 0.0001;
    
    double sum = x;      
    double term = x;     
    int n = 1;           
    printf("Iterative calculation for sin(%.2f):\n", x);
    printf("Term 1: %f\n", term);

    while (1) {
      
        term = -term * (x * x) / ((2 * n) * (2 * n + 1));
        
        sum += term;
        printf("Term %d: %f | Current Sum: %f\n", n + 1, term, sum);

        if (fabs(term) < target_error) {
            break;
        }
        n++;
    }

    printf("\nFinal Result: %f\n", sum);
    printf("Library sin(%.2f): %f\n", x, sin(x));

    return 0;
}