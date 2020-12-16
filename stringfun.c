#include <stdlib.h>
#include <stdio.h>

void bracket_balance(char *, int); // prototype

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
        free(s);
        return 0;
}
void bracket_balance(char *str, int letters){
        int size = letters;
        char *open_arr = (char *) malloc(sizeof(char)*size);
        char character;

        for (int i = 0; i < size-1; i++) {
            character = str[i];
                *(open_arr+i) = character;
        }
        int i = size-2;
        while (i >= 0 )
        {
                if ( *(open_arr+i) == 'g') {i--;}
                else if (*(open_arr+i) == 'v') {i--;}
                else if (*(open_arr+i) == 's') {i--;}
                else if (*(open_arr+i) == 'u') {i--;}
                else {printf("%c", *(open_arr+i)); i--;}
        }
        printf("\n");
        free(open_arr);
}