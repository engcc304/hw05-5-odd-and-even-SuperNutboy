/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>

int main () {

    int num ;

    printf("Input Num :");
    scanf( "%d",&num );

    if (num % 3 == 0) {
        printf( "%d is an odd integer" ,num) ;
    } else {
        printf( "%d is an even integer" ,num) ;
    }
    return 0;
}