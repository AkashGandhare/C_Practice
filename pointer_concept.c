
void test_pointer() {

    char arr[20] = "Akash Gandhare";
    int *p = 0;
    p = arr; /**< store address of arr[0] */
    p++ ;/**< increment address by sizeof(int) i.e. 4 bytes */
    printf("first element = %c", p[0]);
}



