#include <stdio.h>
#include <stdlib.h>
extern int x ;
void recursive(int n) {

    if (n<=1) {
      printf("%d ",n);
    } else {
        recursive(n/2);
        printf("%d ",n%2) ;
    }
}

void float_modulo(float num) {
//    num = num%2;        // modulo operation is not valid on float
    printf("%f",num);
}

void static_recursive() {
    static unsigned int n = 20;

    if (n>1) {
        n = n/2;
        static_recursive();
        printf("%d ",n) ;
    }
}

local_global_var(){
    int arr[x];
    int x = 0;
    x = sizeof(arr);
    printf("%d",x);

}
