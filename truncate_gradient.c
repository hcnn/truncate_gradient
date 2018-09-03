#include "truncate_gradient.h"

void truncate_gradient(double* g, size_t n, double tolgrad)
{
    for(size_t i=0; i<n; i++){
        if(fabs(g[i]) < tolgrad){
            g[i] = 0.0;
        }
    }
}
