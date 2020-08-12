#include <stdio.h>
#include <stdlib.h>

void test_uninitialized_var() {

    unsigned int i = 2147483649;
    double j;

    printf("size of int = %u \n", sizeof(i));
    printf("size of double = %d \n", sizeof(j));
    printf("&j = %u \n", &*&j);
}
