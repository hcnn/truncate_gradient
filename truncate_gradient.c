#include "truncate_gradient.h"

void truncate_gradient(double* g, int n, double tolgrad)
{
    for(int i=0; i<n; i++){
        if(fabs(g[i]) < tolgrad){
            g[i] = 0.0;
        }
    }
}
