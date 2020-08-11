#include <stdio.h>
#include <stdint.h>
#include <limits.h>


void test_pointer() {

    char arr[20] = "Akash Gandhare";
    int *p = 0;
    p = arr; /**< store address of arr[0] */
    p++ ;/**< increment address by sizeof(int) i.e. 4 bytes */
    printf("first element = %c", p[0]);
}

void test_pointer_2() {

    #if CHAR_BIT != 8
    #error "CHAR_BIT must be 8"
    #endif // CHAR_BIT

    uint8_t u8_arr[] = {0x12, 0x56, 0x9A, 0xDE};
    unsigned int* ui_ptr = (void *)u8_arr;

    printf("%u\r\n", (unsigned)(*ui_ptr));
}


