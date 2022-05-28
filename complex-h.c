#include <stdio.h>      
#include <complex.h>    

int main() {

double complex z1 = 4.0 + 3.0 * I;
double complex z2 = 4.0 - 3.0 * I;

printf("Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

double complex sum = z1 + z2;
printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));

double complex diff = z1 - z2;
printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(diff), cimag(diff));

double complex product = z1 * z2;
printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));

double complex quotient = z1 / z2;
printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

double complex conjugate = conj(z1);
printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));

double absolute = cabsf(z1);
printf("The absolute of Z1 = %0.2lf\n",absolute);

double phase = cargf(z1);
printf("The phase angle of Z1 = %0.2lf\n",phase);

return 0;
}