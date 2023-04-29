/*
//#include <stdio.h>

typedef struct {
    double real;
    double imag;
} ComplexNumber;

void print_complex(const ComplexNumber c);

void acc_sum_complex(ComplexNumber *C, int N) {
   // Type your code here.
}

int main() {

  //initialize variables
  int integerN;

  scanf( "%d", integerN );

  for ( int i = 0; i<integerN, i++ )
  {

  }
   return 0;
}

void print_complex(const ComplexNumber c) {
    if (c.imag >= 0.0)
        printf("%.4f + %.4fi", c.real, c.imag);
    else
        printf("%.4f - %.4fi", c.real, -c.imag);
}
*/

#include <stdio.h>

typedef struct {
double real;
double imag;
} ComplexNumber;

void print_complex(const ComplexNumber c);

void acc_sum_complex(ComplexNumber *C, int N);

int main() {

int N;
scanf("%d", &N);

ComplexNumber C[N];

for (int i = 0; i < N; i++) {
    scanf("%lf %lf", &C[i].real, &C[i].imag);
}

acc_sum_complex(C, N);

for (int i = 0; i < N; i++) {
    print_complex(C[i]);
    printf("\n");
}

return 0;
}

void print_complex(const ComplexNumber c) {
    if (c.imag >= 0.0)
        printf("%.4f + %.4fi", c.real, c.imag);
    else
        printf("%.4f - %.4fi", c.real, -c.imag);
}

void acc_sum_complex(ComplexNumber *C, int N) {
ComplexNumber sum = {0.0, 0.0};
for (int i = 0; i < N; i++) {
sum.real += C[i].real;
sum.imag += C[i].imag;
C[i].real = sum.real;
C[i].imag = sum.imag;
}
}
