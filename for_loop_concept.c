/** \brief for loop testing with multiple conditions
 *
 * \param
 * \param
 * \return
 *
 */
#define COND_1
//#define COND_2
void forLoop_test() {

    int i = 0, j = 10;
#ifdef COND_1
/**< Concept: only j> 0 is considered */
    for( ;i<5,j>0; i++,j--) {

        printf("i = %d \n", i);
        printf("j = %d \n", j);
    }
#endif // COND_1

#ifdef COND_2
/**< Concept: only i<5 is considered */
    for( ; j>0,i<5; i++,j--) {

        printf("i = %d \n", i);
        printf("j = %d \n", j);
    }
#endif // COND_2

/**< Concept: only last condition gets checked in for loop, others get ignored */
}



