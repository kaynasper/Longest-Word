
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Program to get the longest word from an input sentence.

int longest_word(char *txt) 
{
        int counter = 0, object_len = 0, indexed;

        for (int x=0 ; (txt[x] != '\0') ; x++) {
                if (isalpha(txt[x])) {
                        counter++;
                } else {
                        
                        counter = 0;
                }
                if (counter > object_len) {
                        object_len = counter;
                        indexed = x;
                }
        }

        printf("\n");
        for (int y=0 ; y<object_len ; y++) {
                printf("%c", txt[(indexed - object_len + 1) + y]);
        }
        printf("\n");

        return 0;
}



//<C>
int main()
{
        char text[120];
        printf("Enter Text: ");
        fgets(text, 119, stdin);

        longest_word(text);

        return 0;
}
