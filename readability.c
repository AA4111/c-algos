#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
//***taking text as input*****
string text=get_string("text: ");
//***letter,words,sentences
float SENTENCES;
float WORDS;
float LETTERS;
int sentences=0;
int letter=0;
int word=1;
int n=strlen(text);

for (int i=0;  i<n ; i++)
{
    if ( islower(text[i]) || isupper(text[i]) )
    {
        letter++;
    }
     if(text[i] == ' ')
    {
        word++;
    }
     if(text[i] == '!' || text[i] == '.' || text[i] =='?')
    {
        sentences++;
    }
    LETTERS=letter;
    SENTENCES=sentences;
    WORDS=word;
}
float L = 100 * LETTERS/word;
float S = 100 * SENTENCES/word;

float index = 0.0588 * L - 0.296 * S - 15.8;
int X = round(index);

if(X < 16 && X >= 1)
{
    printf("grade: %i\n" ,X);
}
else if(X >= 16)
{
    printf("grade 16+");
}
else
{
    printf("before grade 1");
}
printf("\n");
}

