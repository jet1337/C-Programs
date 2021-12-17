#include <stdio.h>
#include <stdlib.h>

//Jacob Taylor

int main()
{
    int inner, reverse = 0; //variables
    int a[10], b[10];
    int i, j, k, m, n = 0; //loop counter variables

    printf("Enter the first array of size 10: "); //array 1
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }//end array 1 assignment
    printf("Enter the second array of size 10: "); //array 2
    for(j = 0; j < 10; j++){
        scanf("%d", &b[j]);
    }//end array 2 assignment


    //inner product loop
    for(k = 0; k < 10; k++){
        inner += a[k] * b[k];
    }

    //reverse inner product loop
    for(m = 0, n = 9; m < 10; m++, n--){
        reverse += a[m] * b[n];
    }

    printf("Inner product is: %d\nInner product reverse is: %d\n", inner, reverse);
    return 0;
}
