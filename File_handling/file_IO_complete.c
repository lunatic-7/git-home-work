#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    ptr = fopen("myfile.txt", "r");
    char c = fgetc(ptr);
    printf("The character I read was %c\n", c);
    c = fgetc(ptr);
    printf("The character I read was %c\n", c);

    fclose(ptr);

    ptr = fopen("myfile.txt", "r");
    char str[4];
    fgets(str, 5, ptr);
    printf("The string I read was %s\n", str);

    fclose(ptr);

    ptr = fopen("myfile.txt", "w");
    fputc('o', ptr);
    fputs("This is Awesome...", ptr);

    fclose(ptr);
    
    return 0;
}