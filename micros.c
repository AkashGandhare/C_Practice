#include <stdio.h>
#include <stdlib.h>

void micros() {

    printf("File: %s \n",__FILE__ );
    printf("function: %s \n",__func__ );
    printf("Line: %d \n",__LINE__ );
    printf("Time: %s \n",__TIME__ );
    printf("Date: %s \n",__DATE__ );

//    const char* name = "FLUX";
//    printf("%d",strlen(name));

}

