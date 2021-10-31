#include <stdio.h>

int main(void) {
    
    char input[25] = { 0 };
    char output[25] = { 0 };
    char c;
    int i = 0;
    int j;

    while (1) {
        scanf_s("%c", &c);
        if (c != ' ')
            input[i++] = c;
        else
            break;
    }

    for (i = 0, j = sizeof (input); j != -1; i++)
        output[i] = input[--j];

    for (i = 0; i < 25; ++i)
        printf("%c", output[i]);

    return 0;
}