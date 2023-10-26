#include <stdio.h>

int gcd(int u, int v)
    {
        int t;
        while (u != 0)
        {
            if (u < v) // if u < v swap u and v
                {t = u; u = v; v = t;} 
            u = u % v; // implements the euclidian algorithm via modulo
            //printf("%d %d\n", u, v);
        }
    return v;
    }

int main()
{
    int x,y;
    while (scanf("%d %d", &x, &y) != EOF)
    {   
        if (x > 0 && y > 0)
            printf("%d %d %d\n", x, y, gcd(x,y));
    }
    
}
