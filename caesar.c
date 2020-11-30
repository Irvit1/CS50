#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    for (int j = 0; j < strlen(argv[1]); j++)
    {
        if (!(argv[1][j] >= 48 && argv[1][j] <= 57))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


    int a = atoi(argv[1]) % 26;

    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    for(int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if(s[i] + a <= 90)
            {
                printf("%c", s[i] + a);
            }
            else if (s[i] + a > 90)
            {
                printf("%c", s[i] + a - 26);
            }
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] + a <= 122)
            {
                printf("%c", s[i] + a);
            }
            else if (s[i] + a > 122)
            {
                printf("%c", s[i] + a - 26);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;




}