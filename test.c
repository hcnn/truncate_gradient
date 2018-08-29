#include <stdio.h>  // printf
#include "truncate_gradient.h"

int main()
{
    int n = 7;
    double g[] = {.3, .2, .1, .0, -.1, -.2, -.3};
    double tolgrad = 0.15;
    
    truncate_gradient(g, n, tolgrad);
    
    for(int i=0; i<n; i++){
        printf("%4.1f\n", g[i]);
    }
}
