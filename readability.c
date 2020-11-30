#include <cs50.h>
#include <string.h>
#include<stdio.h>

int main()
{
    string s = get_string("Enter the String: ");
    int cletters=0 ,cwords=0 ,csentences=0 ;
    float L,S,index ;


    for(int i = 0, n = strlen(s); i < n; i++ )
    {
        if(s[i]>='a' && s[i]<='z' )
        {
            cletters++;
        }

        else if(s[i]>='A' && s[i]<='Z' )
        {
            cletters++;
        }

        else if(s[i] == 32)
        {
            cwords++;
        }

        else if(s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            csentences++;
        }

    }

    L = ((float)cletters/(float)cwords ) * 100;
    S = ((float)csentences/(float)cwords ) * 100;

    index = 0.0588 * L - 0.296 * S - 15.8;

    if(index<1)
      printf("Before Grade 1\n");

    else if(index>16)
      printf("Grade 16+\n");

    else
    printf("Grade %i\n",(int)index);




}
