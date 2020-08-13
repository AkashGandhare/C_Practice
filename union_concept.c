#include <stdio.h>
#include <stdlib.h>

void union_concept() {

    union Data {
        int i1;
        int i2;
    }data={.i1=10};

    printf("%d \n",data.i1 );
    printf("%d \n",data.i2 );
}

