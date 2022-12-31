// if the name of file is in this formate xxxxxxxxxx-AN_33.zip
// enter the name of a file xxxxxxxxxx and get the hidden password of a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char iascii(int a1, int a2)
{
    char k;
    int a;
    a = 10 * a1 + a2;
    if (a >= 0 && a <= 9)
    {
        k = 48 + a;
    }
    else if (a >= 10 && a <= 25)
    {
        k = 22 + a;
    }
    else if (a >= 26 && a <= 94)
    {
        k = 32 + a;
    }
    return k;
}
int main()
{
    int ik = 0, jk = 0;
    char input[60];
    int j = 0;
    printf("\n\nEnter the name of a zip file to extract a password:\n");
    scanf("%s", input);
    printf("The password of the file is:\n");
    while (input[j] != '\0' && input[j + 1] != '\0')
    {
        printf("%c", iascii(input[j] - 48, input[j + 1] - 48));
        j = j + 2;
    }
    printf("\n");
    return 0;
}