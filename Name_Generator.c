// enter the passsword and get the suggested name of the zip file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int iascii(char a)
{
    int k;
    if (a >= '0' && a <= '9')
    {
        k = a - 48;
        printf("0");
    }
    else if (a >= ' ' && a <= '/')
    {
        k = a - 22;
    }
    else if (a >= ':' && a <= '~')
    {
        k = a - 32;
    }
    return k;
}
int main()
{
    int j = 0;
    char input[30]; // size of the input string must below 30
    int conv[60];
    printf("\n\nEnter any Password and get the suggested name for a zip file:\n");
    scanf("%[^\n]", input);
    printf("suggested name is:\n");
    while (input[j] != '\0')
    {
        printf("%d", iascii(input[j])); // converting the characters into two digits numbers every time
        j++;
    }
    printf("-AN_31.zip\n");
    printf("Warning:password can be only decoded by (Password_decoder) file");

    return 0;
}