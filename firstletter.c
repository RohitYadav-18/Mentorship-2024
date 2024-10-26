#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    if (str[0]!='\0')
    {
        printf("%c",str[0]);
    }
    
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i-1]==' ' || (str[i - 1]=='\n')
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}
