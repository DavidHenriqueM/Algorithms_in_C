#include <stdio.h>

int gcd(int u, int v) {
    int t;
    while (u != 0) {
        if (u < v) {  // if u < v swap u and v
            t = u;
            u = v;
            v = t;
        }
        u = u % v;  // implements the euclidian algorithm via modulo
        // printf("%d %d\n", u, v);
    }
    return v;
}
// fraction structure definition
struct fraction {
    int numerator;
    int denominator;
};

typedef struct fraction Fraction;

void fraction_reduce(Fraction *f) {
    int t;
    t = gcd(f->numerator, f->denominator);
    f->numerator = f->numerator / t;
    f->denominator = f->denominator / t;
}

int main() {
    //
    Fraction f;
    Fraction *fptr = &f;

    while (scanf("%d %d", &f.numerator, &f.denominator) != EOF) {
        if (f.denominator > 0) {
            fraction_reduce(fptr);
            printf("%d %d\n", f.numerator, f.denominator);
        }
    }
}
