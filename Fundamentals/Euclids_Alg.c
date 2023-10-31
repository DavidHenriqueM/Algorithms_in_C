#include <stdio.h>

int gcd(unsigned int u, unsigned int v) {
    int t;
    while (u != 0) {
        if (u < v)  // if u < v swap u and v
        {
            t = u;
            u = v;
            v = t;
        }
        u = u % v;  // implements the euclidian algorithm via modulo
        // printf("%d %d\n", u, v);
    }
    return v;
}

int main() {
    unsigned int x, y;
    while (scanf("%u %u", &x, &y) != EOF) {
        if (x > 0 && y > 0) printf("%u %u %d\n", x, y, gcd(x, y));
    }
}
