#include <stdlib.h>
#include <stdio.h>

void bracket_balance(char *, int);
int main(void){


        char *s;
        int nread = EOF + 1;;
        size_t maxn = 10;

        s = (char*) malloc(sizeof(char)*maxn);

        nread = getline(&s, &maxn, stdin);

        while (nread != EOF){
                if (nread == EOF) {
                        break;
                }
                else {
                bracket_balance(s, nread);
                nread = getline(&s, &maxn, stdin);
                }
        }    
        
        return 0;
}
void bracket_balance(char *str, int letters){
        int size = letters;
        char *open_arr = (char *) malloc(sizeof(char)*size);
        char character;
        

        for (int i = 0; i < size-1; i++) {
            character = str[i];

            if (character != 'g') {
                *(open_arr+i) = character;
            }
           
        }
        
        for ( int i = 0; i < size-1; i++)
        {
            printf("%c\n", *(open_arr+i));
        }
        
}