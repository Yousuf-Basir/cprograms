#include <stdio.h>
main(){
    int n, *mallo;
    mallo = (int*) malloc(2 * sizeof(int));


    scanf("%d", mallo); // WHY HERE SACNF DOESNT REQUIRE "&"
    /* the * before mallo is for getting the memory location of mallo */
    printf("%d \n", *mallo + 2);


    // here i am addressing the next 4 byte's location of mallo
    // which has total size of 8 byte
    scanf("%d", mallo+1);
    // the star out side the first bracket is for getting
    // the address of next 4 byte of mallo.
    printf("%d \n", *(mallo+1)+2);
}
