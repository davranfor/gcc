#include <stdio.h>

#define lambda(rt, fb)({rt ___ fb ___; })

int main(void)
{
    __extension__
    double (*f)(double x[]) = lambda(double, (double x[]) { return x[0] * x[1]; });
    double x[] = {4.0, 5.0};

    printf("%f\n", f(x));
    return 0;
}

