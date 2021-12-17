#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Jacob Taylor

{
    char ch; //digits of phone number
    bool isDigit; //is ch a number
    printf("Enter a phone number you would like to convert: ");

    while((ch = getchar()) != '\n'){
        isDigit = (ch >= '0' && ch <= '9'); //checks if ch is a digit
        if (ch >= 'a' && ch <= 'z'){ //correction for lowercase
            ch -= 32;
        }
        if (isDigit || ch == '-'){ //prints digits or dashes
            printf("%c", ch);
            continue;
        }

        //all of the character replacements from letter to digit
        if (ch >= 'A' && ch <= 'C'){
            putchar('2');
            continue;
        }
        if (ch >= 'D' && ch <= 'F'){
            putchar('3');
            continue;
        }
        if (ch >= 'G' && ch <= 'I'){
            putchar('4');
            continue;
        }
        if (ch >= 'J' && ch <= 'L'){
            putchar('5');
            continue;
        }
        if (ch >= 'M' && ch <= 'O'){
            putchar('6');
            continue;
        }
        if (ch >= 'P' && ch <= 'S'){
            putchar('7');
            continue;
        }
        if (ch >= 'T' && ch <= 'V'){
            putchar('8');
            continue;
        }
        if (ch >= 'W' && ch <= 'Z'){
            putchar('9');
            continue;
        }
    }
    return 0;
}
