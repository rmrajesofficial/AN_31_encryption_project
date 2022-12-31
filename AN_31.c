#include <stdio.h>
int inpsize = 30; // size of input string must below inpsize
int numinp[300], convert[100], spec[100], timer[100], j = 0, m = 0;
char OasciiC(int b)
{
    int a = 100 + b % 26;
    char f = a - 35; // converting int to char according to the algorithm
    return f;
}
char OasciiS(int b)
{
    int a = 100 + b % 26;
    char f = a - 3; // converting int to char according to the algorithm
    return f;
}
char OasciiSp(int b)
{
    int a;
    a = 100 + b % 42;
    char f;
    if (a <= 131)
    {
        f = a - 67;
    }
    else if (a > 131 && a <= 137)
    {
        f = a - 41;
    }
    else if (a > 137)
    {
        f = a - 15;
    }
    return f; // converting int to char according to the algorithm
}
int iascii(char a)
{
    int f = a + 67; // converting char to int according to the algorithm
    return f;
}
void convertnumber(char *inp)
{
    // converting the input into number format and stored in (numinp) array
    int i = 0, flag = 0;
    while (inp[i] != '\0')
    {
        int a = iascii(inp[i]);
        while (a != 0)
        {
            flag = a % 10;
            numinp[j] = flag;
            a = a / 10;
            j++;
        }
        i++;
    }
}
void Divide()
{
    int a = 0; // divide the numbers into three groups (convert),(spec) and (timer)
    while (a < j)
    {
        convert[m] = 100 * numinp[a];
        a++;
        convert[m] = convert[m] + 10 * numinp[a];
        a++;
        convert[m] = convert[m] + numinp[a];
        a++;
        spec[m] = numinp[a];
        a++;
        timer[m] = numinp[a];
        a++;
        m++;
    }
}
int main()
{
    int rows = 0, inpsize = 30;
    char inp[inpsize]; // input
    printf("\n\nProtect your password by converting into random symbols,letters and numbers\nEnter the password:\n");
    scanf("%[^\n]", inp);
    convertnumber(inp); // convert in terms of numbers of size j array
    Divide();           // dividing numbers into three groups
    printf("‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n");
    while (rows < m)
    {
        int s, t, c;
        s = spec[rows] % 4;      // constraining the numbers in (spec) group
        c = convert[rows] % 194; // constraining the numbers in (convert) group
        if (timer[rows] == 0)
            t = 5; // constraining the numbers in (timer) group
        else
            t = timer[rows]; // constraining the numbers in (timer) group
        if (c < 100)
        {
            c = 93 + c; // constraining the numbers in (convert) group
            if (c < 100)
            {
                c = 93 + c;
            }
        }
        // the range of number in (convert) group = 100-193
        // the range of number in (spec) group = 0-3
        // the range of number in (timer) group = 1-9
        if (s == 0)
        {
            for (int i = 0; i < t; i++) // for spec = 0 output should be capital letter
            {
                printf("%c", OasciiC(c));
                c = c + spec[rows] + 4;
            }
        }
        else if (s == 2)
        {
            for (int i = 0; i < t; i++) // for spec = 2 output should be small letter
            {
                printf("%c", OasciiS(c));
                c = c + spec[rows] + 4;
            }
        }
        else
        {
            for (int i = 0; i < t; i++) // for spec = 1 or 3 output should be special character or number
            {
                printf("%c", OasciiSp(c));
                c = c + spec[rows] + 4;
            }
        }
        rows++;
    }
    printf("\n____________________");
    return 0;
}
