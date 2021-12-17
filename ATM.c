#include <stdio.h>
#include <stdlib.h>

//Jacob Taylor

int main()
{
    int hund, fifty, twenty, ten, five, one; //holds change
    int amt, temp; //holds user starting amount and temp amount
    printf("Insert your cash to be changed (Enter bills only): ");
    scanf("%d", &amt);
    temp = amt;

    //hundreds
    hund = temp / 100;
    if (hund != 0){
        temp = temp % 100;
    }
    //fifties
    fifty = (temp / 50);
    if (fifty != 0)
        temp = temp % 50;

    //twenties
    twenty = temp / 20;
    if (twenty != 0)
        temp = temp % 20;

    //tens
    ten = temp / 10;
    if (ten != 0)
        temp = temp % 10;

    //fives
    five = temp / 5;
    if (five != 0)
        temp = temp % 5;

    //ones
    one = temp / 1;
    if (one != 0)
        temp = temp % 1;

    printf("Please take your change for $%d\n\n", amt);

    for(int i = 0; i < hund; i++){
        printf("$100 ");
    }
    for(int i = 0; i < fifty; i++){
        printf("$50 ");
    }
    for(int i = 0; i < twenty; i++){
        printf("$20 ");
    }
    for(int i = 0; i < ten; i++){
        printf("$10 ");
    }
    for(int i = 0; i < five; i++){
        printf("$5 ");
    }
    for(int i = 0; i < one; i++){
        printf("$1 ");
    }
    return 0;
}
