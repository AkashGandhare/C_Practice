#include <stdio.h>
#include <stdlib.h>

void struct_concept() {

    struct structfields {
        int b1 : 2;
        int b2 : 4;
        int b3 : 4;
        int b4 : 3;
        int b5 : 4;

    }bit = {2,3,8,7,0b1011};

    int i = 0b1001;

    printf("%d \n",bit.b1 );
    printf("%d \n",bit.b2 );
    printf("%d \n",bit.b3 );
    printf("%d \n",bit.b4 );
    printf("%d \n",bit.b5 );

}

void struct_concept_2() {

//    struct Book {
//        char author[50];
//        char title[50];
//        int pages;
//
//    }book1 = {"Akash","Embedded",500};

      typedef struct book {
        char *author;
        char* title;
        int pages;

    }Book;

    Book book1;
    book1.author = "Akash";
    book1.title = "Embedded";
    book1.pages = 500;

    printf("%s \n",book1.author );
    printf("%s \n",book1.title );
    printf("%d \n",book1.pages );


}



