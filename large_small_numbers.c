#include <stdio.h>
#include <stdlib.h>

void find_large_small_number() {

    int array[] = {5, 89, 50, 69, 1, 333,8999, 8};

    int len = sizeof(array)/sizeof(array[0]);

    int largeNum = array[0];
    int smallNum = array[0];

    for( int k=0; k< len; k++) {

        if(largeNum > array[k])
            largeNum = array[k];

         if(smallNum < array[k])
            smallNum = array[k];
    }

    printf("large num is %d\n", largeNum);
     printf("small num is %d\n", smallNum);

}
