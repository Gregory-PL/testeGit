#include "mat.h"

int fatorial (int n){
    if(n == 0)
        return 1;

        cout << n << endl;

    return fatorial (n-1)* n;
}
